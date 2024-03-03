cmake_minimum_required(VERSION 3.22)

project(PreCompiledLibExample VERSION 1.0.0 LANGUAGES C CXX)

set(EXECUTABLE_NAME MyExecutable)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
find_package(LibExample REQUIRED)

add_executable(${EXECUTABLE_NAME} main.cc)
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LibExample_LIBRARIES})
target_include_directories(${EXECUTABLE_NAME} PUBLIC ${LibExample_INCLUDE_DIRS})
