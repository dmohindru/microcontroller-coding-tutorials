# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /home/dhruv/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/223.8836.42/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/dhruv/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/223.8836.42/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/dhruv/Programming/arduino/arduino-tutorial-series/platformio_examples/tutorial05-serialport/Serial Monitor"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/dhruv/Programming/arduino/arduino-tutorial-series/platformio_examples/tutorial05-serialport/Serial Monitor/cmake-build-nanoatmega328new"

# Utility rule file for Production.

# Include any custom commands dependencies for this target.
include CMakeFiles/Production.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Production.dir/progress.make

CMakeFiles/Production:
	cd "/home/dhruv/Programming/arduino/arduino-tutorial-series/platformio_examples/tutorial05-serialport/Serial Monitor" && platformio -c clion run -enanoatmega328new

Production: CMakeFiles/Production
Production: CMakeFiles/Production.dir/build.make
.PHONY : Production

# Rule to build all files generated by this target.
CMakeFiles/Production.dir/build: Production
.PHONY : CMakeFiles/Production.dir/build

CMakeFiles/Production.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Production.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Production.dir/clean

CMakeFiles/Production.dir/depend:
	cd "/home/dhruv/Programming/arduino/arduino-tutorial-series/platformio_examples/tutorial05-serialport/Serial Monitor/cmake-build-nanoatmega328new" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/dhruv/Programming/arduino/arduino-tutorial-series/platformio_examples/tutorial05-serialport/Serial Monitor" "/home/dhruv/Programming/arduino/arduino-tutorial-series/platformio_examples/tutorial05-serialport/Serial Monitor" "/home/dhruv/Programming/arduino/arduino-tutorial-series/platformio_examples/tutorial05-serialport/Serial Monitor/cmake-build-nanoatmega328new" "/home/dhruv/Programming/arduino/arduino-tutorial-series/platformio_examples/tutorial05-serialport/Serial Monitor/cmake-build-nanoatmega328new" "/home/dhruv/Programming/arduino/arduino-tutorial-series/platformio_examples/tutorial05-serialport/Serial Monitor/cmake-build-nanoatmega328new/CMakeFiles/Production.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Production.dir/depend

