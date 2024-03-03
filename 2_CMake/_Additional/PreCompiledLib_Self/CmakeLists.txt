cmake_minimum_required(VERSION 3.22)

project(
    PreCompiledLibExample
    VERSION 1.0.0
    LANGUAGES C CXX)

set(EXECUTABLE_NAME MyExecutable)

add_executable(${EXECUTABLE_NAME} main.cc)

target_include_directories(${EXECUTABLE_NAME}
                           PUBLIC ${CMAKE_SOURCE_DIR}/external/inc)

# .lib/.a (static)
# .dll/.so (dynamic)
if(MSVC)
    target_link_libraries(
        ${EXECUTABLE_NAME}
        PUBLIC ${CMAKE_SOURCE_DIR}/external/lib/LibExample.lib)
else()
    target_link_libraries(
        ${EXECUTABLE_NAME}
        PUBLIC ${CMAKE_SOURCE_DIR}/external/lib/libLibExample.a)
endif()
