# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram/linux-build"

# Include any dependencies generated for this target.
include CMakeFiles/BasicProgram.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BasicProgram.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BasicProgram.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BasicProgram.dir/flags.make

CMakeFiles/BasicProgram.dir/codegen:
.PHONY : CMakeFiles/BasicProgram.dir/codegen

CMakeFiles/BasicProgram.dir/main.cpp.o: CMakeFiles/BasicProgram.dir/flags.make
CMakeFiles/BasicProgram.dir/main.cpp.o: /home/kowalski/Desktop/c_plus_plus/GUI\ -\ Builds/CMake/BasicProgram/main.cpp
CMakeFiles/BasicProgram.dir/main.cpp.o: CMakeFiles/BasicProgram.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram/linux-build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BasicProgram.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BasicProgram.dir/main.cpp.o -MF CMakeFiles/BasicProgram.dir/main.cpp.o.d -o CMakeFiles/BasicProgram.dir/main.cpp.o -c "/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram/main.cpp"

CMakeFiles/BasicProgram.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/BasicProgram.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram/main.cpp" > CMakeFiles/BasicProgram.dir/main.cpp.i

CMakeFiles/BasicProgram.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/BasicProgram.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram/main.cpp" -o CMakeFiles/BasicProgram.dir/main.cpp.s

# Object files for target BasicProgram
BasicProgram_OBJECTS = \
"CMakeFiles/BasicProgram.dir/main.cpp.o"

# External object files for target BasicProgram
BasicProgram_EXTERNAL_OBJECTS =

BasicProgram: CMakeFiles/BasicProgram.dir/main.cpp.o
BasicProgram: CMakeFiles/BasicProgram.dir/build.make
BasicProgram: CMakeFiles/BasicProgram.dir/compiler_depend.ts
BasicProgram: CMakeFiles/BasicProgram.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram/linux-build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BasicProgram"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BasicProgram.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BasicProgram.dir/build: BasicProgram
.PHONY : CMakeFiles/BasicProgram.dir/build

CMakeFiles/BasicProgram.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BasicProgram.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BasicProgram.dir/clean

CMakeFiles/BasicProgram.dir/depend:
	cd "/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram/linux-build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram" "/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram" "/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram/linux-build" "/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram/linux-build" "/home/kowalski/Desktop/c_plus_plus/GUI - Builds/CMake/BasicProgram/linux-build/CMakeFiles/BasicProgram.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/BasicProgram.dir/depend

