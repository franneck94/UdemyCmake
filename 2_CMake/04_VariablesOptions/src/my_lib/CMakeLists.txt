#Inside $ and curly braces is a variable defined somewhere else
#Generally created in top directory that can be included in any subdirectory
add_library(${LIBRARY_NAME} STATIC my_lib.cc)
target_include_directories(${LIBRARY_NAME} PUBLIC "./")
