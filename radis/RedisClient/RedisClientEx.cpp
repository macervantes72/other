#include "RedisClientEx.h"
#include <boost/bind.hpp>

#include <mutex>
#include <condition_variable>

#pragma warning(disable:4996)

class RedisConnectCheck
{
public:
    RedisConnectCheck(RedisClientEx* owner)
        : m_pOwner(owner)
        , m_threadCheck(nullptr)
        , m_nRCMillSec(5000)
        , m_nRCSkipMillSec(0)
    {
    }
    ~RedisConnectCheck()
    {
        if (m_threadCheck)
            delete m_threadCheck;
    }

public:
    void SetReconnectInterval(int millsec){ m_nRCMillSec = millsec; }

    void Start()
    {
        if (m_threadCheck == nullptr)
        {
            m_threadCheck = new std::thread(std::bind(&RedisConnectCheck::CheckRun, this));
        }
    }
    void Stop()
    {
        if (m_threadCheck == nullptr)
            return;

        m_Waiter.notify_one();

        m_threadCheck->join();
    }

    void SetHasConnected(bool hasConnected){ m_bHasConnected = hasConnected; }

private:
    void CheckRun()
    {
        const int WAIT_MILLSEC = 400;
        while (true)
        {
            {
                std::unique_lock <std::mutex> lock(m_mtxGuard);
                m_Waiter.wait_for(lock, std::chrono::milliseconds(WAIT_MILLSEC));
            }
            if (m_pOwner->m_Stoped)
                break;

            m_nRCSkipMillSec += WAIT_MILLSEC;

            if (!m_bHasConnected || m_pOwner->m_bConnected || m_pOwner->m_Connecting)
                continue;

            //自动重连
            if (m_nRCSkipMillSec >= m_nRCMillSec)
            {
                m_nRCSkipMillSec = 0;
                m_pOwner->DoConnect();
            }
        }
    }

private:
    std::thread*            m_threadCheck;
    RedisClientEx*          m_pOwner;

    int                     m_nRCMillSec;
    bool                    m_bHasConnected;
    std::mutex              m_mtxGuard;
    std::condition_variable m_Waiter;
    int                     m_nRCSkipMillSec;
};


RedisClientEx::RedisClientEx(boost::asio::io_service &ioService)
	: RedisAsyncClient(ioService)
	, m_Work(ioService)
    , m_bConnected(false)
    , m_bHasDoConnected(false)
	, m_ioSrv(ioService)
{
    m_pConnectCheck = new RedisConnectCheck(this);
}


RedisClientEx::~RedisClientEx()
{
    delete m_pConnectCheck;
}

void RedisClientEx::SetConnection(const std::string& strUrl, const std::string& passwd)
{
    if (strUrl.empty())
        return;

    char* pszFrontAddress = (char*)strUrl.c_str();

    int len = strlen(pszFrontAddress);

    char* pAdress = strstr(pszFrontAddress, "://");
    if (pAdress == NULL)
        pAdress = pszFrontAddress;
    else
        pAdress += 3;

    if (pAdress >= pszFrontAddress + len)
        return;

    char* pPort = strstr(pAdress, ":");
    if (pPort == NULL)
        return;

    char szTmp[500] = { 0 };
    strncpy(szTmp, pAdress, std::min<int>(pPort - pAdress, sizeof(szTmp) - 1));
    m_strUrl = szTmp;

    pPort += 1;

    m_nPort = atoi(pPort);
	m_strPasswd = passwd;
}

void RedisClientEx::OnConnect(bool connected, const std::string &errorMessage)
{
    m_bConnected = connected;
    m_pConnectCheck->SetHasConnected(true);
    if (!m_bConnected)
    {
        printf("redis disconnect\n");
    }
    else
    {
		if (!m_strPasswd.empty())
		{
			command("AUTH", m_strPasswd, boost::bind(&RedisClientEx::OnLogined, this, _1));
		}
		else
		{
			printf("redis connected\n");
		}
    }
}

void RedisClientEx::Start()
{
    m_Stoped = false;
    m_pConnectCheck->SetReconnectInterval(1000);
    m_pConnectCheck->Start();
    m_Thread = std::tr1::shared_ptr<std::thread>(new std::thread(boost::bind(&boost::asio::io_service::run, &m_ioSrv)));
    DoConnect();
}

void RedisClientEx::Stop()
{
    m_Stoped = true;
    m_ioSrv.stop();
    if (m_Thread)
    {
        m_Thread->join();
    }

    if (m_pConnectCheck)
    {
        m_pConnectCheck->Stop();
    }
}

void RedisClientEx::DoConnect()
{
	char szPort[40];
	sprintf(szPort, "%d", m_nPort);
	boost::asio::ip::tcp::resolver resolver(m_ioSrv);
	boost::asio::ip::tcp::resolver::query query(m_strUrl, szPort);
	boost::asio::ip::tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);
	std::string ip = endpoint_iterator->endpoint().address().to_string();

    boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::address::from_string(ip), m_nPort);
	asyncConnect(endpoint_iterator->endpoint(), boost::bind(&RedisClientEx::OnConnect, this, _1, _2));
}

void RedisClientEx::OnLogined(const RedisValue &value)
{
	if (value.isError())
	{
		printf("redis auth failed\n");
	}
	else
	{
		printf("redis auth sucess\n");
	}
}
