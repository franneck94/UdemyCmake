# 0.) Create code and CMake File
# 1.) mkdir build
# 2.) cd build
# 3.) cmake .. # configure cmake
# 4.) cmake --build .
# 5.) ./Executable
cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

add_executable(Executable main.cc)
