# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "E:\CLion 2017.3.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2017.3.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\files\c,cpp\projects\1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\files\c,cpp\projects\1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab1_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab1_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab1_2.dir/flags.make

CMakeFiles/lab1_2.dir/lab1_2.cpp.obj: CMakeFiles/lab1_2.dir/flags.make
CMakeFiles/lab1_2.dir/lab1_2.cpp.obj: ../lab1_2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\files\c,cpp\projects\1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab1_2.dir/lab1_2.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab1_2.dir\lab1_2.cpp.obj -c E:\files\c,cpp\projects\1\lab1_2.cpp

CMakeFiles/lab1_2.dir/lab1_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab1_2.dir/lab1_2.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\files\c,cpp\projects\1\lab1_2.cpp > CMakeFiles\lab1_2.dir\lab1_2.cpp.i

CMakeFiles/lab1_2.dir/lab1_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab1_2.dir/lab1_2.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\files\c,cpp\projects\1\lab1_2.cpp -o CMakeFiles\lab1_2.dir\lab1_2.cpp.s

CMakeFiles/lab1_2.dir/lab1_2.cpp.obj.requires:

.PHONY : CMakeFiles/lab1_2.dir/lab1_2.cpp.obj.requires

CMakeFiles/lab1_2.dir/lab1_2.cpp.obj.provides: CMakeFiles/lab1_2.dir/lab1_2.cpp.obj.requires
	$(MAKE) -f CMakeFiles\lab1_2.dir\build.make CMakeFiles/lab1_2.dir/lab1_2.cpp.obj.provides.build
.PHONY : CMakeFiles/lab1_2.dir/lab1_2.cpp.obj.provides

CMakeFiles/lab1_2.dir/lab1_2.cpp.obj.provides.build: CMakeFiles/lab1_2.dir/lab1_2.cpp.obj


# Object files for target lab1_2
lab1_2_OBJECTS = \
"CMakeFiles/lab1_2.dir/lab1_2.cpp.obj"

# External object files for target lab1_2
lab1_2_EXTERNAL_OBJECTS =

lab1_2.exe: CMakeFiles/lab1_2.dir/lab1_2.cpp.obj
lab1_2.exe: CMakeFiles/lab1_2.dir/build.make
lab1_2.exe: CMakeFiles/lab1_2.dir/linklibs.rsp
lab1_2.exe: CMakeFiles/lab1_2.dir/objects1.rsp
lab1_2.exe: CMakeFiles/lab1_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\files\c,cpp\projects\1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab1_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab1_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab1_2.dir/build: lab1_2.exe

.PHONY : CMakeFiles/lab1_2.dir/build

CMakeFiles/lab1_2.dir/requires: CMakeFiles/lab1_2.dir/lab1_2.cpp.obj.requires

.PHONY : CMakeFiles/lab1_2.dir/requires

CMakeFiles/lab1_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab1_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab1_2.dir/clean

CMakeFiles/lab1_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\files\c,cpp\projects\1 E:\files\c,cpp\projects\1 E:\files\c,cpp\projects\1\cmake-build-debug E:\files\c,cpp\projects\1\cmake-build-debug E:\files\c,cpp\projects\1\cmake-build-debug\CMakeFiles\lab1_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab1_2.dir/depend
