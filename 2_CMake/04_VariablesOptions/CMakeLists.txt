# 0.) Create Source and CMakeFile
# 1.) make prepare
# 2.) cmake ..   -  Generting the Build Files / Configure the Project
#We get our defined message
# 3.) cmake --build .
#Here only library will be built if we have kept compile_executable off
# 2.) cmake .. -DCOMPILE_EXECUTABLE=ON
#To build library and executable
# 4.) ./app/Executable

cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

#Set Use c++17
set(CMAKE_CXX_STANDARD          17)
#Require that compiler version fully implements given standard
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#G++ compilers have some features implemented that are not a part of c++ standard
#These are termed as extensions. We'l turn those off
set(CMAKE_CXX_EXTENSIONS        OFF)

#Defining variables so that we don't have to remember library names or executable name
#Choose any name not reserved by cmake
#Syntax is name followed by a value

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

#Option names can be set to OFF or ON
#This variable can be set to on in the command line if we want to
#cmake .. -DCOMPILE_EXECUTABLE=ON
option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

add_subdirectory(src)
if (COMPILE_EXECUTABLE)
    add_subdirectory(app)
else()
    message("Without exe compiling")
endif()
