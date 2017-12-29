
#pragma once

#include <string>
#include "config.h"

#include "redisvalue.h"

class RedisClientSpi
{
public:
	virtual void onRspCommand(const RedisValue& value, int requestId) = 0;
};


class REDIS_CLIENT_DECL RedisClientApi
{
public:
	static RedisClientApi* CreateRedisClientApi();
	virtual void SetConnection(const std::string& strUrl, const std::string& passwd) = 0;
	virtual bool Connected() = 0;
	virtual void release() = 0;
	virtual void start() = 0;
	virtual void stop() = 0;
	virtual void command(const std::string &cmd, int requestId = 0) = 0;
	virtual void command(const std::string &cmd, const std::string &arg1, int requestId = 0) = 0;
	virtual void command(const std::string &cmd, const std::string &arg1, const std::string &arg2, int requestId = 0) = 0;
	virtual void command(const std::string &cmd, const std::string &arg1,
		const std::string &arg2, const std::string &arg3, int requestId = 0) = 0;
	virtual void command(const std::string &cmd, const std::string &arg1, const std::string &arg2,
		const std::string &arg3, const std::string &arg4, int requestId = 0) = 0;
	virtual void command(const std::string &cmd, const std::string &arg1,
		const std::string &arg2, const std::string &arg3,
		const std::string &arg4, const std::string &arg5, int requestId = 0) = 0;
	virtual void command(const std::string &cmd, const std::string &arg1,
		const std::string &arg2, const std::string &arg3,
		const std::string &arg4, const std::string &arg5,
		const std::string &arg6, int requestId = 0) = 0;
	virtual void command(const std::string &cmd, const std::string &arg1,
		const std::string &arg2, const std::string &arg3,
		const std::string &arg4, const std::string &arg5,
		const std::string &arg6, const std::string &arg7, int requestId = 0) = 0;
};