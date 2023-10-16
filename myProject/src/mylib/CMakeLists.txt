add_library(${LIBRARY_NAME} STATIC mylib.cpp)
target_include_directories(${LIBRARY_NAME} PUBLIC "./")
