
include_directories(
	./
	./impl/
)
SET(RedisClient_SRC RedisClientApiEx.cpp
	RedisClientEx.cpp
	./impl/redisasyncclient.cpp
	./impl/redisclientimpl.cpp
	./impl/redisparser.cpp
	./impl/redissyncclient.cpp
	./impl/redisvalue.cpp
)

ADD_LIBRARY(RedisClient SHARED ${RedisClient_SRC})
SET_TARGET_PROPERTIES(RedisClient
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
    LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
)

