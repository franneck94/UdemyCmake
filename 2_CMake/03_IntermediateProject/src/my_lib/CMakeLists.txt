add_library(${LIBRARY_NAME} STATIC "my_lib.cc")
# Include dir to header files
# This does not have to be set, to be able to compile the program
# However, for MSVC builds this is needed, to have the headers listed in VS.
target_include_directories(${LIBRARY_NAME} PUBLIC "./")
