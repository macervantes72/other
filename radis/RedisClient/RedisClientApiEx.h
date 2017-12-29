#pragma once
#include "RedisClientApi.h"
#include "RedisClientEx.h"



class RedisClientApiEx : public RedisClientApi
{
public:
	RedisClientApiEx();
	~RedisClientApiEx();

public:
	virtual void release();
	virtual void start();
	virtual void stop();

public:
	virtual void SetConnection(const std::string& strUrl, const std::string& passwd);
	virtual bool Connected();
	virtual void command(const std::string &cmd, int requestId = 0);
	virtual void command(const std::string &cmd, const std::string &arg1, int requestId = 0);
	virtual void command(const std::string &cmd, const std::string &arg1, const std::string &arg2, int requestId = 0);
	virtual void command(const std::string &cmd, const std::string &arg1,
		const std::string &arg2, const std::string &arg3, int requestId = 0);
	virtual void command(const std::string &cmd, const std::string &arg1, const std::string &arg2,
		const std::string &arg3, const std::string &arg4, int requestId = 0);
	virtual void command(const std::string &cmd, const std::string &arg1,
		const std::string &arg2, const std::string &arg3,
		const std::string &arg4, const std::string &arg5, int requestId = 0);
	virtual void command(const std::string &cmd, const std::string &arg1,
		const std::string &arg2, const std::string &arg3,
		const std::string &arg4, const std::string &arg5,
		const std::string &arg6, int requestId = 0);
	virtual void command(const std::string &cmd, const std::string &arg1,
		const std::string &arg2, const std::string &arg3,
		const std::string &arg4, const std::string &arg5,
		const std::string &arg6, const std::string &arg7, int requestId = 0);

private:
	void OnSet(const RedisValue &value, int requestId);
	void OnError(const std::string& msg);

private:
	RedisClientEx* client_;
	boost::asio::io_service ioSrv;
	RedisClientSpi* spi_;
};

