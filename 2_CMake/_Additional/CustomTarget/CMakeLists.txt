cmake_minimum_required(VERSION 3.28)

project(CustomTargetExample)
cmake_minimum_required(VERSION 3.20)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(CustomPythonTarget)

add_subdirectory(HeaderLib)
add_subdirectory(src)
