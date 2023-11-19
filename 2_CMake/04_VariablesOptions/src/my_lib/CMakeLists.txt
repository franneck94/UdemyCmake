add_library(${LIBRARY_NAME} STATIC my_lib.cc)
target_include_directories(${LIBRARY_NAME} PUBLIC "./")
