cmake_minimum_required(VERSION 3.22)

project(
    LibExample
    VERSION 1.0.0
    LANGUAGES C CXX)

set(LIBRARY_NAME LibExample)

add_library(${LIBRARY_NAME} STATIC src/lib.cc)
target_include_directories(${LIBRARY_NAME} PUBLIC inc/)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        add_compile_definitions("/Wall /Werror")
    else()
        add_compile_definitions("/Wall")
    endif()
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        add_compile_definitions("/W4 /Wx")
    else()
        add_compile_definitions("/W4")
    endif()
endif()
