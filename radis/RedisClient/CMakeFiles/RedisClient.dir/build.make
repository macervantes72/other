# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/local/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /ProjectCode/xinrang/CTPPrj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /ProjectCode/xinrang/CTPPrj

# Include any dependencies generated for this target.
include RedisClient/CMakeFiles/RedisClient.dir/depend.make

# Include the progress variables for this target.
include RedisClient/CMakeFiles/RedisClient.dir/progress.make

# Include the compile flags for this target's objects.
include RedisClient/CMakeFiles/RedisClient.dir/flags.make

RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o: RedisClient/CMakeFiles/RedisClient.dir/flags.make
RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o: RedisClient/RedisClientApiEx.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /ProjectCode/xinrang/CTPPrj/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o -c /ProjectCode/xinrang/CTPPrj/RedisClient/RedisClientApiEx.cpp

RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.i"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /ProjectCode/xinrang/CTPPrj/RedisClient/RedisClientApiEx.cpp > CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.i

RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.s"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /ProjectCode/xinrang/CTPPrj/RedisClient/RedisClientApiEx.cpp -o CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.s

RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o.requires:
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o.requires

RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o.provides: RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o.requires
	$(MAKE) -f RedisClient/CMakeFiles/RedisClient.dir/build.make RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o.provides.build
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o.provides

RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o.provides.build: RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o

RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o: RedisClient/CMakeFiles/RedisClient.dir/flags.make
RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o: RedisClient/RedisClientEx.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /ProjectCode/xinrang/CTPPrj/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o -c /ProjectCode/xinrang/CTPPrj/RedisClient/RedisClientEx.cpp

RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RedisClient.dir/RedisClientEx.cpp.i"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /ProjectCode/xinrang/CTPPrj/RedisClient/RedisClientEx.cpp > CMakeFiles/RedisClient.dir/RedisClientEx.cpp.i

RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RedisClient.dir/RedisClientEx.cpp.s"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /ProjectCode/xinrang/CTPPrj/RedisClient/RedisClientEx.cpp -o CMakeFiles/RedisClient.dir/RedisClientEx.cpp.s

RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o.requires:
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o.requires

RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o.provides: RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o.requires
	$(MAKE) -f RedisClient/CMakeFiles/RedisClient.dir/build.make RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o.provides.build
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o.provides

RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o.provides.build: RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o

RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o: RedisClient/CMakeFiles/RedisClient.dir/flags.make
RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o: RedisClient/impl/redisasyncclient.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /ProjectCode/xinrang/CTPPrj/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o -c /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisasyncclient.cpp

RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.i"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisasyncclient.cpp > CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.i

RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.s"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisasyncclient.cpp -o CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.s

RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o.requires:
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o.requires

RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o.provides: RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o.requires
	$(MAKE) -f RedisClient/CMakeFiles/RedisClient.dir/build.make RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o.provides.build
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o.provides

RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o.provides.build: RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o

RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o: RedisClient/CMakeFiles/RedisClient.dir/flags.make
RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o: RedisClient/impl/redisclientimpl.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /ProjectCode/xinrang/CTPPrj/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o -c /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisclientimpl.cpp

RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.i"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisclientimpl.cpp > CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.i

RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.s"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisclientimpl.cpp -o CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.s

RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o.requires:
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o.requires

RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o.provides: RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o.requires
	$(MAKE) -f RedisClient/CMakeFiles/RedisClient.dir/build.make RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o.provides.build
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o.provides

RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o.provides.build: RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o

RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o: RedisClient/CMakeFiles/RedisClient.dir/flags.make
RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o: RedisClient/impl/redisparser.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /ProjectCode/xinrang/CTPPrj/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o -c /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisparser.cpp

RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RedisClient.dir/impl/redisparser.cpp.i"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisparser.cpp > CMakeFiles/RedisClient.dir/impl/redisparser.cpp.i

RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RedisClient.dir/impl/redisparser.cpp.s"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisparser.cpp -o CMakeFiles/RedisClient.dir/impl/redisparser.cpp.s

RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o.requires:
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o.requires

RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o.provides: RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o.requires
	$(MAKE) -f RedisClient/CMakeFiles/RedisClient.dir/build.make RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o.provides.build
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o.provides

RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o.provides.build: RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o

RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o: RedisClient/CMakeFiles/RedisClient.dir/flags.make
RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o: RedisClient/impl/redissyncclient.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /ProjectCode/xinrang/CTPPrj/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o -c /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redissyncclient.cpp

RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.i"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redissyncclient.cpp > CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.i

RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.s"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redissyncclient.cpp -o CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.s

RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o.requires:
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o.requires

RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o.provides: RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o.requires
	$(MAKE) -f RedisClient/CMakeFiles/RedisClient.dir/build.make RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o.provides.build
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o.provides

RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o.provides.build: RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o

RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o: RedisClient/CMakeFiles/RedisClient.dir/flags.make
RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o: RedisClient/impl/redisvalue.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /ProjectCode/xinrang/CTPPrj/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o -c /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisvalue.cpp

RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.i"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisvalue.cpp > CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.i

RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.s"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && /usr/local/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /ProjectCode/xinrang/CTPPrj/RedisClient/impl/redisvalue.cpp -o CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.s

RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o.requires:
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o.requires

RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o.provides: RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o.requires
	$(MAKE) -f RedisClient/CMakeFiles/RedisClient.dir/build.make RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o.provides.build
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o.provides

RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o.provides.build: RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o

# Object files for target RedisClient
RedisClient_OBJECTS = \
"CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o" \
"CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o" \
"CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o" \
"CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o" \
"CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o" \
"CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o" \
"CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o"

# External object files for target RedisClient
RedisClient_EXTERNAL_OBJECTS =

bin/libRedisClient.so: RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o
bin/libRedisClient.so: RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o
bin/libRedisClient.so: RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o
bin/libRedisClient.so: RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o
bin/libRedisClient.so: RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o
bin/libRedisClient.so: RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o
bin/libRedisClient.so: RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o
bin/libRedisClient.so: RedisClient/CMakeFiles/RedisClient.dir/build.make
bin/libRedisClient.so: RedisClient/CMakeFiles/RedisClient.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../bin/libRedisClient.so"
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RedisClient.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
RedisClient/CMakeFiles/RedisClient.dir/build: bin/libRedisClient.so
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/build

RedisClient/CMakeFiles/RedisClient.dir/requires: RedisClient/CMakeFiles/RedisClient.dir/RedisClientApiEx.cpp.o.requires
RedisClient/CMakeFiles/RedisClient.dir/requires: RedisClient/CMakeFiles/RedisClient.dir/RedisClientEx.cpp.o.requires
RedisClient/CMakeFiles/RedisClient.dir/requires: RedisClient/CMakeFiles/RedisClient.dir/impl/redisasyncclient.cpp.o.requires
RedisClient/CMakeFiles/RedisClient.dir/requires: RedisClient/CMakeFiles/RedisClient.dir/impl/redisclientimpl.cpp.o.requires
RedisClient/CMakeFiles/RedisClient.dir/requires: RedisClient/CMakeFiles/RedisClient.dir/impl/redisparser.cpp.o.requires
RedisClient/CMakeFiles/RedisClient.dir/requires: RedisClient/CMakeFiles/RedisClient.dir/impl/redissyncclient.cpp.o.requires
RedisClient/CMakeFiles/RedisClient.dir/requires: RedisClient/CMakeFiles/RedisClient.dir/impl/redisvalue.cpp.o.requires
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/requires

RedisClient/CMakeFiles/RedisClient.dir/clean:
	cd /ProjectCode/xinrang/CTPPrj/RedisClient && $(CMAKE_COMMAND) -P CMakeFiles/RedisClient.dir/cmake_clean.cmake
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/clean

RedisClient/CMakeFiles/RedisClient.dir/depend:
	cd /ProjectCode/xinrang/CTPPrj && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /ProjectCode/xinrang/CTPPrj /ProjectCode/xinrang/CTPPrj/RedisClient /ProjectCode/xinrang/CTPPrj /ProjectCode/xinrang/CTPPrj/RedisClient /ProjectCode/xinrang/CTPPrj/RedisClient/CMakeFiles/RedisClient.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : RedisClient/CMakeFiles/RedisClient.dir/depend

