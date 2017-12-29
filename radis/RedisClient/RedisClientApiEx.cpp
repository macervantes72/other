#include "RedisClientApiEx.h"
#include <boost/bind.hpp>

RedisClientApi* RedisClientApi::CreateRedisClientApi()
{
	return new RedisClientApiEx();
}


RedisClientApiEx::RedisClientApiEx()
	: spi_(nullptr)
{
	client_ = new RedisClientEx(ioSrv);
	client_->installErrorHandler(boost::bind(&RedisClientApiEx::OnError, this, _1));
}


RedisClientApiEx::~RedisClientApiEx()
{
	delete client_;
}

void RedisClientApiEx::release()
{
	delete this;
}

void RedisClientApiEx::SetConnection(const std::string& strUrl, const std::string& passwd)
{
	client_->SetConnection(strUrl, passwd);
}

bool RedisClientApiEx::Connected()
{
	return client_->Connected();
}

void RedisClientApiEx::start()
{
	client_->Start();
}

void RedisClientApiEx::stop()
{
	client_->Stop();
}

void RedisClientApiEx::command(const std::string &cmd, int requestId)
{
	client_->command(cmd, boost::bind(&RedisClientApiEx::OnSet, this, _1, requestId));
}

void RedisClientApiEx::command(
	const std::string &cmd, const std::string &arg1, int requestId)
{
	client_->command(cmd, arg1, boost::bind(&RedisClientApiEx::OnSet, this, _1, requestId));
}

void RedisClientApiEx::command(
	const std::string &cmd, const std::string &arg1, const std::string &arg2, int requestId)
{
	client_->command(cmd, arg1, arg2, boost::bind(&RedisClientApiEx::OnSet, this, _1, requestId));
}

void RedisClientApiEx::command(
	const std::string &cmd, const std::string &arg1,
	const std::string &arg2, const std::string &arg3, int requestId)
{
	client_->command(cmd, arg1, arg2, arg3, boost::bind(&RedisClientApiEx::OnSet, this, _1, requestId));
}

void RedisClientApiEx::command(
	const std::string &cmd, const std::string &arg1, const std::string &arg2,
	const std::string &arg3, const std::string &arg4, int requestId)
{
	client_->command(cmd, arg1, arg2, arg3, arg4, boost::bind(&RedisClientApiEx::OnSet, this, _1, requestId));
}

void RedisClientApiEx::command(
	const std::string &cmd, const std::string &arg1,
	const std::string &arg2, const std::string &arg3,
	const std::string &arg4, const std::string &arg5, int requestId)
{
	client_->command(cmd, arg1, arg2, arg3, arg4, arg5, boost::bind(&RedisClientApiEx::OnSet, this, _1, requestId));
}

void RedisClientApiEx::command(
	const std::string &cmd, const std::string &arg1,
	const std::string &arg2, const std::string &arg3,
	const std::string &arg4, const std::string &arg5,
	const std::string &arg6, int requestId)
{
	client_->command(cmd, arg1, arg2, arg3, arg4, arg5, arg6, boost::bind(&RedisClientApiEx::OnSet, this, _1, requestId));
}


void RedisClientApiEx::command(
	const std::string &cmd, const std::string &arg1,
	const std::string &arg2, const std::string &arg3,
	const std::string &arg4, const std::string &arg5,
	const std::string &arg6, const std::string &arg7, int requestId)
{
	client_->command(cmd, arg1, arg2, arg3, arg4, arg5, arg6, arg7, boost::bind(&RedisClientApiEx::OnSet, this, _1, requestId));
}

void RedisClientApiEx::OnSet(const RedisValue &value, int requestId)
{
	//(void)(value);
	if (spi_ != nullptr)
	{
		spi_->onRspCommand(value, requestId);
	}
}

void RedisClientApiEx::OnError(const std::string& msg)
{

}


