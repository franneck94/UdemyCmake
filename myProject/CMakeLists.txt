# 0. Create Source and CMakeFile
# 1. mkdir build
# 2. cd build
# 3. cmake ..         # Generating the build files / configure the project
# 4. cmake --build .
# 5. ./Executable     # Executable name

cmake_minimum_required(VERSION 3.16)

project(
    CppProjectTemplate
    VERSION 1.0.0
    LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD          20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

add_subdirectory(src)
if(COMPILE_EXECUTABLE)
    add_subdirectory(app)
endif()
