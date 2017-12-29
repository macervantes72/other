#ifndef REDISCLIENT_CONFIG_H
#define REDISCLIENT_CONFIG_H

#if defined(WIN32)
#ifdef REDIS_CLIENT_BUILD
#define REDIS_CLIENT_DECL __declspec(dllexport)
#else
#define REDIS_CLIENT_DECL __declspec(dllimport)
#endif
#else
#define REDIS_CLIENT_DECL
#endif

#endif

