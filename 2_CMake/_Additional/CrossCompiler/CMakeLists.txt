cmake_minimum_required(VERSION 3.22)

project(LibExample VERSION 1.0.0 LANGUAGES C CXX)

set(LIBRARY_NAME LibExample)

add_library(${LIBRARY_NAME} STATIC src/lib.cc)
target_include_directories(${LIBRARY_NAME} PUBLIC inc/)
