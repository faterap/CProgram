# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Users\Administrator\Desktop\c\c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Users\Administrator\Desktop\c\c\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c.dir/flags.make

CMakeFiles/c.dir/main.c.obj: CMakeFiles/c.dir/flags.make
CMakeFiles/c.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Users\Administrator\Desktop\c\c\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\c.dir\main.c.obj   -c E:\Users\Administrator\Desktop\c\c\main.c

CMakeFiles/c.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Users\Administrator\Desktop\c\c\main.c > CMakeFiles\c.dir\main.c.i

CMakeFiles/c.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Users\Administrator\Desktop\c\c\main.c -o CMakeFiles\c.dir\main.c.s

CMakeFiles/c.dir/main.c.obj.requires:

.PHONY : CMakeFiles/c.dir/main.c.obj.requires

CMakeFiles/c.dir/main.c.obj.provides: CMakeFiles/c.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\c.dir\build.make CMakeFiles/c.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/c.dir/main.c.obj.provides

CMakeFiles/c.dir/main.c.obj.provides.build: CMakeFiles/c.dir/main.c.obj


CMakeFiles/c.dir/bst.c.obj: CMakeFiles/c.dir/flags.make
CMakeFiles/c.dir/bst.c.obj: ../bst.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Users\Administrator\Desktop\c\c\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/c.dir/bst.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\c.dir\bst.c.obj   -c E:\Users\Administrator\Desktop\c\c\bst.c

CMakeFiles/c.dir/bst.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c.dir/bst.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Users\Administrator\Desktop\c\c\bst.c > CMakeFiles\c.dir\bst.c.i

CMakeFiles/c.dir/bst.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c.dir/bst.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Users\Administrator\Desktop\c\c\bst.c -o CMakeFiles\c.dir\bst.c.s

CMakeFiles/c.dir/bst.c.obj.requires:

.PHONY : CMakeFiles/c.dir/bst.c.obj.requires

CMakeFiles/c.dir/bst.c.obj.provides: CMakeFiles/c.dir/bst.c.obj.requires
	$(MAKE) -f CMakeFiles\c.dir\build.make CMakeFiles/c.dir/bst.c.obj.provides.build
.PHONY : CMakeFiles/c.dir/bst.c.obj.provides

CMakeFiles/c.dir/bst.c.obj.provides.build: CMakeFiles/c.dir/bst.c.obj


CMakeFiles/c.dir/std.c.obj: CMakeFiles/c.dir/flags.make
CMakeFiles/c.dir/std.c.obj: ../std.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Users\Administrator\Desktop\c\c\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/c.dir/std.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\c.dir\std.c.obj   -c E:\Users\Administrator\Desktop\c\c\std.c

CMakeFiles/c.dir/std.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c.dir/std.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Users\Administrator\Desktop\c\c\std.c > CMakeFiles\c.dir\std.c.i

CMakeFiles/c.dir/std.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c.dir/std.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Users\Administrator\Desktop\c\c\std.c -o CMakeFiles\c.dir\std.c.s

CMakeFiles/c.dir/std.c.obj.requires:

.PHONY : CMakeFiles/c.dir/std.c.obj.requires

CMakeFiles/c.dir/std.c.obj.provides: CMakeFiles/c.dir/std.c.obj.requires
	$(MAKE) -f CMakeFiles\c.dir\build.make CMakeFiles/c.dir/std.c.obj.provides.build
.PHONY : CMakeFiles/c.dir/std.c.obj.provides

CMakeFiles/c.dir/std.c.obj.provides.build: CMakeFiles/c.dir/std.c.obj


CMakeFiles/c.dir/life.c.obj: CMakeFiles/c.dir/flags.make
CMakeFiles/c.dir/life.c.obj: ../life.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Users\Administrator\Desktop\c\c\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/c.dir/life.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\c.dir\life.c.obj   -c E:\Users\Administrator\Desktop\c\c\life.c

CMakeFiles/c.dir/life.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c.dir/life.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Users\Administrator\Desktop\c\c\life.c > CMakeFiles\c.dir\life.c.i

CMakeFiles/c.dir/life.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c.dir/life.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Users\Administrator\Desktop\c\c\life.c -o CMakeFiles\c.dir\life.c.s

CMakeFiles/c.dir/life.c.obj.requires:

.PHONY : CMakeFiles/c.dir/life.c.obj.requires

CMakeFiles/c.dir/life.c.obj.provides: CMakeFiles/c.dir/life.c.obj.requires
	$(MAKE) -f CMakeFiles\c.dir\build.make CMakeFiles/c.dir/life.c.obj.provides.build
.PHONY : CMakeFiles/c.dir/life.c.obj.provides

CMakeFiles/c.dir/life.c.obj.provides.build: CMakeFiles/c.dir/life.c.obj


# Object files for target c
c_OBJECTS = \
"CMakeFiles/c.dir/main.c.obj" \
"CMakeFiles/c.dir/bst.c.obj" \
"CMakeFiles/c.dir/std.c.obj" \
"CMakeFiles/c.dir/life.c.obj"

# External object files for target c
c_EXTERNAL_OBJECTS =

C:/Users/Administrator/CLionProjects/c/c.exe: CMakeFiles/c.dir/main.c.obj
C:/Users/Administrator/CLionProjects/c/c.exe: CMakeFiles/c.dir/bst.c.obj
C:/Users/Administrator/CLionProjects/c/c.exe: CMakeFiles/c.dir/std.c.obj
C:/Users/Administrator/CLionProjects/c/c.exe: CMakeFiles/c.dir/life.c.obj
C:/Users/Administrator/CLionProjects/c/c.exe: CMakeFiles/c.dir/build.make
C:/Users/Administrator/CLionProjects/c/c.exe: CMakeFiles/c.dir/linklibs.rsp
C:/Users/Administrator/CLionProjects/c/c.exe: CMakeFiles/c.dir/objects1.rsp
C:/Users/Administrator/CLionProjects/c/c.exe: CMakeFiles/c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Users\Administrator\Desktop\c\c\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable C:\Users\Administrator\CLionProjects\c\c.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\c.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c.dir/build: C:/Users/Administrator/CLionProjects/c/c.exe

.PHONY : CMakeFiles/c.dir/build

CMakeFiles/c.dir/requires: CMakeFiles/c.dir/main.c.obj.requires
CMakeFiles/c.dir/requires: CMakeFiles/c.dir/bst.c.obj.requires
CMakeFiles/c.dir/requires: CMakeFiles/c.dir/std.c.obj.requires
CMakeFiles/c.dir/requires: CMakeFiles/c.dir/life.c.obj.requires

.PHONY : CMakeFiles/c.dir/requires

CMakeFiles/c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\c.dir\cmake_clean.cmake
.PHONY : CMakeFiles/c.dir/clean

CMakeFiles/c.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Users\Administrator\Desktop\c\c E:\Users\Administrator\Desktop\c\c E:\Users\Administrator\Desktop\c\c\cmake-build-debug E:\Users\Administrator\Desktop\c\c\cmake-build-debug E:\Users\Administrator\Desktop\c\c\cmake-build-debug\CMakeFiles\c.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c.dir/depend

