
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(WIN32) || defined(_WINDOWS)

#define WIN32_LEAN_AND_MEAN
#include <windows.h>


#ifdef REDISCLIENT_EXPORTS
#define RDSEXPORT __declspec(dllexport)
#else
#define RDSEXPORT __declspec(dllimport)
#endif

#else
#include <stdint.h>
#define RDSEXPORT
#endif
