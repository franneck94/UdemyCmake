# 0.) Create Source and CMakeFile
# 1.) mkdir build
# 2.) cd build
# 3.) cmake ..   -  Generting the Build Files / Configure the Project
# 4.) cmake --build .
# 5.) ./app/Executable



#Its a good practice to create a cmake file in every directory that has source and header files
cmake_minimum_required(VERSION 3.16)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

#WE need to tell cmake where to search for other cmake files
#List source first as we define library first, it needs to be defined previously
add_subdirectory(src)
add_subdirectory(app)
