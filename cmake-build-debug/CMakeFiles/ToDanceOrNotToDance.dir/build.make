# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\danie\CLionProjects\ToDanceOrNotToDance

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\danie\CLionProjects\ToDanceOrNotToDance\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\ToDanceOrNotToDance.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\ToDanceOrNotToDance.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\ToDanceOrNotToDance.dir\flags.make

CMakeFiles\ToDanceOrNotToDance.dir\main.cpp.obj: CMakeFiles\ToDanceOrNotToDance.dir\flags.make
CMakeFiles\ToDanceOrNotToDance.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\danie\CLionProjects\ToDanceOrNotToDance\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ToDanceOrNotToDance.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ToDanceOrNotToDance.dir\main.cpp.obj /FdCMakeFiles\ToDanceOrNotToDance.dir\ /FS -c C:\Users\danie\CLionProjects\ToDanceOrNotToDance\main.cpp
<<

CMakeFiles\ToDanceOrNotToDance.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ToDanceOrNotToDance.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe > CMakeFiles\ToDanceOrNotToDance.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\danie\CLionProjects\ToDanceOrNotToDance\main.cpp
<<

CMakeFiles\ToDanceOrNotToDance.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ToDanceOrNotToDance.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ToDanceOrNotToDance.dir\main.cpp.s /c C:\Users\danie\CLionProjects\ToDanceOrNotToDance\main.cpp
<<

# Object files for target ToDanceOrNotToDance
ToDanceOrNotToDance_OBJECTS = \
"CMakeFiles\ToDanceOrNotToDance.dir\main.cpp.obj"

# External object files for target ToDanceOrNotToDance
ToDanceOrNotToDance_EXTERNAL_OBJECTS =

ToDanceOrNotToDance.exe: CMakeFiles\ToDanceOrNotToDance.dir\main.cpp.obj
ToDanceOrNotToDance.exe: CMakeFiles\ToDanceOrNotToDance.dir\build.make
ToDanceOrNotToDance.exe: CMakeFiles\ToDanceOrNotToDance.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\danie\CLionProjects\ToDanceOrNotToDance\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ToDanceOrNotToDance.exe"
	"C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\ToDanceOrNotToDance.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\ToDanceOrNotToDance.dir\objects1.rsp @<<
 /out:ToDanceOrNotToDance.exe /implib:ToDanceOrNotToDance.lib /pdb:C:\Users\danie\CLionProjects\ToDanceOrNotToDance\cmake-build-debug\ToDanceOrNotToDance.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\ToDanceOrNotToDance.dir\build: ToDanceOrNotToDance.exe

.PHONY : CMakeFiles\ToDanceOrNotToDance.dir\build

CMakeFiles\ToDanceOrNotToDance.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ToDanceOrNotToDance.dir\cmake_clean.cmake
.PHONY : CMakeFiles\ToDanceOrNotToDance.dir\clean

CMakeFiles\ToDanceOrNotToDance.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\danie\CLionProjects\ToDanceOrNotToDance C:\Users\danie\CLionProjects\ToDanceOrNotToDance C:\Users\danie\CLionProjects\ToDanceOrNotToDance\cmake-build-debug C:\Users\danie\CLionProjects\ToDanceOrNotToDance\cmake-build-debug C:\Users\danie\CLionProjects\ToDanceOrNotToDance\cmake-build-debug\CMakeFiles\ToDanceOrNotToDance.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\ToDanceOrNotToDance.dir\depend

