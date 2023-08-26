cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

# set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
# include(AddGitSubmodule)

include(FetchContent)

#Used to declare which github repo we want to use and then makeavailable
#The repo needs to be a cmake project
#What to use in which use case? Should use gitsubmodule if not cmake project. Add gitsubmodule with cmake,etc.
#Else use fetchcontent as it is simpler to use
FetchContent_Declare(
    nlohmann_json #Add exactly the project name from the cmake file in the repo
    GIT_REPOSITORY https://github.com/nlohmann/json
    GIT_TAG v3.11.2
    GIT_SHALLOW TRUE) #cmake function won't clone recursively the git repo
FetchContent_MakeAvailable(nlohmann_json)#Will load this library into our cmake project

FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt
    GIT_TAG 9.1.0
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(fmt)

FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog
    GIT_TAG v1.11.0
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(spdlog)

FetchContent_Declare(
    cxxopts
    GIT_REPOSITORY https://github.com/jarro2783/cxxopts
    GIT_TAG v3.0.0
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(cxxopts)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2
    GIT_TAG v2.13.9
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(Catch2)

add_subdirectory(configured)
# add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(app)
