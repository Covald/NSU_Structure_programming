# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Repo\NSU\template

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Repo\NSU\template\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\template.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\template.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\template.dir\flags.make

CMakeFiles\template.dir\main.c.obj: CMakeFiles\template.dir\flags.make
CMakeFiles\template.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Repo\NSU\template\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/template.dir/main.c.obj"
	C:\PROGRA~2\MICROS~4\2022\BUILDT~1\VC\Tools\MSVC\1437~1.328\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\template.dir\main.c.obj /FdCMakeFiles\template.dir\ /FS -c C:\Repo\NSU\template\main.c
<<

CMakeFiles\template.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/template.dir/main.c.i"
	C:\PROGRA~2\MICROS~4\2022\BUILDT~1\VC\Tools\MSVC\1437~1.328\bin\Hostx86\x86\cl.exe > CMakeFiles\template.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Repo\NSU\template\main.c
<<

CMakeFiles\template.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/template.dir/main.c.s"
	C:\PROGRA~2\MICROS~4\2022\BUILDT~1\VC\Tools\MSVC\1437~1.328\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\template.dir\main.c.s /c C:\Repo\NSU\template\main.c
<<

# Object files for target template
template_OBJECTS = \
"CMakeFiles\template.dir\main.c.obj"

# External object files for target template
template_EXTERNAL_OBJECTS =

template.exe: CMakeFiles\template.dir\main.c.obj
template.exe: CMakeFiles\template.dir\build.make
template.exe: CMakeFiles\template.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Repo\NSU\template\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable template.exe"
	"C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\template.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100226~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100226~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~4\2022\BUILDT~1\VC\Tools\MSVC\1437~1.328\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\template.dir\objects1.rsp @<<
 /out:template.exe /implib:template.lib /pdb:C:\Repo\NSU\template\cmake-build-debug\template.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\template.dir\build: template.exe

.PHONY : CMakeFiles\template.dir\build

CMakeFiles\template.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\template.dir\cmake_clean.cmake
.PHONY : CMakeFiles\template.dir\clean

CMakeFiles\template.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Repo\NSU\template C:\Repo\NSU\template C:\Repo\NSU\template\cmake-build-debug C:\Repo\NSU\template\cmake-build-debug C:\Repo\NSU\template\cmake-build-debug\CMakeFiles\template.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\template.dir\depend

