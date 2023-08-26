# 0.) Create Source and CMakeFile
# 1.) make prepare , cd build
# 2.) cmake ..   -  Generting the Build Files / Configure the Project
# cat configured_files/include/config.hpp - THe values are replaced in the configure_file(config.hpp.in)
# 3.) cmake --build . or make (both will work)
#Here only library will be built if we have kept compile_executable off
# 2.) cmake .. -DCOMPILE_EXECUTABLE=ON
#To build library and executable
# 4.) ./app/Executable
#We're able to print variables passed into the project function
# CppProjectTemplate
# 1.0.0
# Hello World!
cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
#Includes cmake module files from above directory
include(AddGitSubmodule)

add_git_submodule(external/json)

add_subdirectory(configured)
# add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(app)
