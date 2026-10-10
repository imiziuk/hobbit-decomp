cmake_minimum_required(VERSION 3.20)
project(HobbitDecomp C CXX)

# The game is a 32-bit x86 Windows exe (image base 0x00400000, no ASLR), so everything here is Win32.
if(NOT CMAKE_SIZEOF_VOID_P EQUAL 4)
    message(FATAL_ERROR "Configure with -A Win32 (the game is 32-bit)")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

# Built as dinput8.dll: the game imports DINPUT8.dll, so Windows loads this proxy from the game folder,
# it forwards DirectInput8Create to the real system DLL and installs our reimplemented functions.
# Generated units (tools/ghidra2c.py -> tools/build_units.py): Ghidra C, compiled as C.
file(GLOB AUTO_SOURCES CONFIGURE_DEPENDS auto/ok/*.c)
set_source_files_properties(${AUTO_SOURCES} PROPERTIES COMPILE_OPTIONS "/W1;/std:clatest;/GS-")

add_library(dinput8 SHARED ${SOURCES} ${AUTO_SOURCES} src/dinput8.def)
target_include_directories(dinput8 PRIVATE include src third_party/unicorn/include)
target_compile_definitions(dinput8 PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX _CRT_SECURE_NO_WARNINGS)
# /arch:IA32: x87 floating point like the 2003 original (SSE rounds differently).
# /Zc:threadSafeInit-: plain static-init guards (no TLS), so functions also run inside the emulator.
target_compile_options(dinput8 PRIVATE /W3 /fp:precise /arch:IA32 /Zc:threadSafeInit-)
# Map file: lets tools/equiv.py find each reimplementation's address and size.
target_link_options(dinput8 PRIVATE /MAP:${CMAKE_BINARY_DIR}/dinput8.map /DYNAMICBASE:NO /BASE:0x10000000 /OPT:NOREF /OPT:NOICF)
