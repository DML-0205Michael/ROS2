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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/build/microcdr

# Include any dependencies generated for this target.
include CMakeFiles/microcdr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/microcdr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/microcdr.dir/flags.make

CMakeFiles/microcdr.dir/src/c/common.c.o: CMakeFiles/microcdr.dir/flags.make
CMakeFiles/microcdr.dir/src/c/common.c.o: /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/build/microcdr/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/microcdr.dir/src/c/common.c.o"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/microcdr.dir/src/c/common.c.o   -c /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/common.c

CMakeFiles/microcdr.dir/src/c/common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/microcdr.dir/src/c/common.c.i"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/common.c > CMakeFiles/microcdr.dir/src/c/common.c.i

CMakeFiles/microcdr.dir/src/c/common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/microcdr.dir/src/c/common.c.s"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/common.c -o CMakeFiles/microcdr.dir/src/c/common.c.s

CMakeFiles/microcdr.dir/src/c/types/basic.c.o: CMakeFiles/microcdr.dir/flags.make
CMakeFiles/microcdr.dir/src/c/types/basic.c.o: /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/basic.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/build/microcdr/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/microcdr.dir/src/c/types/basic.c.o"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/microcdr.dir/src/c/types/basic.c.o   -c /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/basic.c

CMakeFiles/microcdr.dir/src/c/types/basic.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/microcdr.dir/src/c/types/basic.c.i"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/basic.c > CMakeFiles/microcdr.dir/src/c/types/basic.c.i

CMakeFiles/microcdr.dir/src/c/types/basic.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/microcdr.dir/src/c/types/basic.c.s"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/basic.c -o CMakeFiles/microcdr.dir/src/c/types/basic.c.s

CMakeFiles/microcdr.dir/src/c/types/string.c.o: CMakeFiles/microcdr.dir/flags.make
CMakeFiles/microcdr.dir/src/c/types/string.c.o: /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/string.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/build/microcdr/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/microcdr.dir/src/c/types/string.c.o"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/microcdr.dir/src/c/types/string.c.o   -c /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/string.c

CMakeFiles/microcdr.dir/src/c/types/string.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/microcdr.dir/src/c/types/string.c.i"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/string.c > CMakeFiles/microcdr.dir/src/c/types/string.c.i

CMakeFiles/microcdr.dir/src/c/types/string.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/microcdr.dir/src/c/types/string.c.s"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/string.c -o CMakeFiles/microcdr.dir/src/c/types/string.c.s

CMakeFiles/microcdr.dir/src/c/types/array.c.o: CMakeFiles/microcdr.dir/flags.make
CMakeFiles/microcdr.dir/src/c/types/array.c.o: /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/array.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/build/microcdr/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/microcdr.dir/src/c/types/array.c.o"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/microcdr.dir/src/c/types/array.c.o   -c /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/array.c

CMakeFiles/microcdr.dir/src/c/types/array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/microcdr.dir/src/c/types/array.c.i"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/array.c > CMakeFiles/microcdr.dir/src/c/types/array.c.i

CMakeFiles/microcdr.dir/src/c/types/array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/microcdr.dir/src/c/types/array.c.s"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/array.c -o CMakeFiles/microcdr.dir/src/c/types/array.c.s

CMakeFiles/microcdr.dir/src/c/types/sequence.c.o: CMakeFiles/microcdr.dir/flags.make
CMakeFiles/microcdr.dir/src/c/types/sequence.c.o: /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/sequence.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/build/microcdr/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/microcdr.dir/src/c/types/sequence.c.o"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/microcdr.dir/src/c/types/sequence.c.o   -c /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/sequence.c

CMakeFiles/microcdr.dir/src/c/types/sequence.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/microcdr.dir/src/c/types/sequence.c.i"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/sequence.c > CMakeFiles/microcdr.dir/src/c/types/sequence.c.i

CMakeFiles/microcdr.dir/src/c/types/sequence.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/microcdr.dir/src/c/types/sequence.c.s"
	/usr/bin/arm-linux-gnueabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR/src/c/types/sequence.c -o CMakeFiles/microcdr.dir/src/c/types/sequence.c.s

# Object files for target microcdr
microcdr_OBJECTS = \
"CMakeFiles/microcdr.dir/src/c/common.c.o" \
"CMakeFiles/microcdr.dir/src/c/types/basic.c.o" \
"CMakeFiles/microcdr.dir/src/c/types/string.c.o" \
"CMakeFiles/microcdr.dir/src/c/types/array.c.o" \
"CMakeFiles/microcdr.dir/src/c/types/sequence.c.o"

# External object files for target microcdr
microcdr_EXTERNAL_OBJECTS =

libmicrocdr.a: CMakeFiles/microcdr.dir/src/c/common.c.o
libmicrocdr.a: CMakeFiles/microcdr.dir/src/c/types/basic.c.o
libmicrocdr.a: CMakeFiles/microcdr.dir/src/c/types/string.c.o
libmicrocdr.a: CMakeFiles/microcdr.dir/src/c/types/array.c.o
libmicrocdr.a: CMakeFiles/microcdr.dir/src/c/types/sequence.c.o
libmicrocdr.a: CMakeFiles/microcdr.dir/build.make
libmicrocdr.a: CMakeFiles/microcdr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/build/microcdr/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C static library libmicrocdr.a"
	$(CMAKE_COMMAND) -P CMakeFiles/microcdr.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/microcdr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/microcdr.dir/build: libmicrocdr.a

.PHONY : CMakeFiles/microcdr.dir/build

CMakeFiles/microcdr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/microcdr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/microcdr.dir/clean

CMakeFiles/microcdr.dir/depend:
	cd /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/build/microcdr && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/eProsima/Micro-CDR /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/build/microcdr /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/build/microcdr /home/ubuntu/ROS2/microros_ws/firmware/mcu_ws/build/microcdr/CMakeFiles/microcdr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/microcdr.dir/depend

