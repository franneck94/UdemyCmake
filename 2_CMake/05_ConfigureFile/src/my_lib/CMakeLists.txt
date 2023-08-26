add_library(${LIBRARY_NAME} STATIC my_lib.cc)
#Include variables defined in our generated config file
#Here this target_include_directories enables us to include files in below directories to where the executable
#file will be created.. Hence there we can directly include my_lib.h and config.hpp
target_include_directories(${LIBRARY_NAME} PUBLIC
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include")
