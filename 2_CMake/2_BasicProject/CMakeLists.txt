cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

add_library(Library STATIC my_lib.cc)

add_executable(Executable main.cc)

target_link_libraries(Executable PUBLIC Library)
