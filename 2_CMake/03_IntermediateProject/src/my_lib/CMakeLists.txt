add_library(Library STATIC my_lib.cc)

#Here we list where to find the header files
#As they are in the same file write ./ (i.e. Relatively the same directory)
target_include_directories(Library PUBLIC "./")
