# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/creapermann/Data/Programming/Cpp/Projects/Primes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/creapermann/Data/Programming/Cpp/Projects/Primes/build

# Include any dependencies generated for this target.
include tests/test1/CMakeFiles/test1.dir/depend.make

# Include the progress variables for this target.
include tests/test1/CMakeFiles/test1.dir/progress.make

# Include the compile flags for this target's objects.
include tests/test1/CMakeFiles/test1.dir/flags.make

tests/test1/CMakeFiles/test1.dir/test.cpp.o: tests/test1/CMakeFiles/test1.dir/flags.make
tests/test1/CMakeFiles/test1.dir/test.cpp.o: ../tests/test1/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/creapermann/Data/Programming/Cpp/Projects/Primes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/test1/CMakeFiles/test1.dir/test.cpp.o"
	cd /home/creapermann/Data/Programming/Cpp/Projects/Primes/build/tests/test1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test1.dir/test.cpp.o -c /home/creapermann/Data/Programming/Cpp/Projects/Primes/tests/test1/test.cpp

tests/test1/CMakeFiles/test1.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test1.dir/test.cpp.i"
	cd /home/creapermann/Data/Programming/Cpp/Projects/Primes/build/tests/test1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/creapermann/Data/Programming/Cpp/Projects/Primes/tests/test1/test.cpp > CMakeFiles/test1.dir/test.cpp.i

tests/test1/CMakeFiles/test1.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test1.dir/test.cpp.s"
	cd /home/creapermann/Data/Programming/Cpp/Projects/Primes/build/tests/test1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/creapermann/Data/Programming/Cpp/Projects/Primes/tests/test1/test.cpp -o CMakeFiles/test1.dir/test.cpp.s

# Object files for target test1
test1_OBJECTS = \
"CMakeFiles/test1.dir/test.cpp.o"

# External object files for target test1
test1_EXTERNAL_OBJECTS =

tests/test1/test1: tests/test1/CMakeFiles/test1.dir/test.cpp.o
tests/test1/test1: tests/test1/CMakeFiles/test1.dir/build.make
tests/test1/test1: lib/liblib.so
tests/test1/test1: tests/test1/CMakeFiles/test1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/creapermann/Data/Programming/Cpp/Projects/Primes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test1"
	cd /home/creapermann/Data/Programming/Cpp/Projects/Primes/build/tests/test1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/test1/CMakeFiles/test1.dir/build: tests/test1/test1

.PHONY : tests/test1/CMakeFiles/test1.dir/build

tests/test1/CMakeFiles/test1.dir/clean:
	cd /home/creapermann/Data/Programming/Cpp/Projects/Primes/build/tests/test1 && $(CMAKE_COMMAND) -P CMakeFiles/test1.dir/cmake_clean.cmake
.PHONY : tests/test1/CMakeFiles/test1.dir/clean

tests/test1/CMakeFiles/test1.dir/depend:
	cd /home/creapermann/Data/Programming/Cpp/Projects/Primes/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/creapermann/Data/Programming/Cpp/Projects/Primes /home/creapermann/Data/Programming/Cpp/Projects/Primes/tests/test1 /home/creapermann/Data/Programming/Cpp/Projects/Primes/build /home/creapermann/Data/Programming/Cpp/Projects/Primes/build/tests/test1 /home/creapermann/Data/Programming/Cpp/Projects/Primes/build/tests/test1/CMakeFiles/test1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/test1/CMakeFiles/test1.dir/depend

