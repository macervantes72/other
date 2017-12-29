#pragma once
#include "redisclient.h"
#include <boost/asio/io_service.hpp>
#include <boost/utility/base_from_member.hpp>
#include <thread>
#include <atomic>

#ifdef _MSC_VER
#include <memory>
#else
#include <tr1/memory>
#endif

class RedisConnectCheck;

class RedisClientEx : public RedisAsyncClient
{
public:
	RedisClientEx(boost::asio::io_service &ioService);
    ~RedisClientEx();

public:
    void Start();
    void Stop();
	void SetConnection(const std::string& strUrl, const std::string& passwd);
    bool Connected(){ return m_bConnected; }

private:
    void DoConnect();

private:
    void OnConnect(bool connected, const std::string &errorMessage);
	void OnLogined(const RedisValue &value);

private:
    boost::asio::io_service& m_ioSrv;
    boost::asio::io_service::work m_Work;
    std::tr1::shared_ptr<std::thread> m_Thread;
    std::string m_strUrl;
    int m_nPort;
	std::string m_strPasswd;
    std::atomic<bool> m_bConnected;
    std::atomic<bool> m_Connecting;
    std::atomic<bool> m_Stoped;
    std::atomic<bool> m_bHasDoConnected;
    RedisConnectCheck* m_pConnectCheck;

private:
    friend class RedisConnectCheck;
};

