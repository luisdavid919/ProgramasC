# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /snap/clion/73/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/73/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/david/Escritorio/Proyectos/rand

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/david/Escritorio/Proyectos/rand/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/rand.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rand.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rand.dir/flags.make

CMakeFiles/rand.dir/main.c.o: CMakeFiles/rand.dir/flags.make
CMakeFiles/rand.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/Escritorio/Proyectos/rand/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/rand.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rand.dir/main.c.o   -c /home/david/Escritorio/Proyectos/rand/main.c

CMakeFiles/rand.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rand.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/david/Escritorio/Proyectos/rand/main.c > CMakeFiles/rand.dir/main.c.i

CMakeFiles/rand.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rand.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/david/Escritorio/Proyectos/rand/main.c -o CMakeFiles/rand.dir/main.c.s

# Object files for target rand
rand_OBJECTS = \
"CMakeFiles/rand.dir/main.c.o"

# External object files for target rand
rand_EXTERNAL_OBJECTS =

rand: CMakeFiles/rand.dir/main.c.o
rand: CMakeFiles/rand.dir/build.make
rand: CMakeFiles/rand.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/david/Escritorio/Proyectos/rand/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable rand"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rand.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rand.dir/build: rand

.PHONY : CMakeFiles/rand.dir/build

CMakeFiles/rand.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rand.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rand.dir/clean

CMakeFiles/rand.dir/depend:
	cd /home/david/Escritorio/Proyectos/rand/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/david/Escritorio/Proyectos/rand /home/david/Escritorio/Proyectos/rand /home/david/Escritorio/Proyectos/rand/cmake-build-debug /home/david/Escritorio/Proyectos/rand/cmake-build-debug /home/david/Escritorio/Proyectos/rand/cmake-build-debug/CMakeFiles/rand.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rand.dir/depend

