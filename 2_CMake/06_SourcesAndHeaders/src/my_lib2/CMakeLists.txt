#When you have a bunch of different source and header files, its better to include them this way
set(LIBRARY_SOURCES
    "my_lib2.cc"
    "my_lib3.cc")
set(LIBRARY_HEADERS
    "my_lib2.h"
    "my_lib3.h")

add_library(${LIBRARY_NAME2} STATIC
    ${LIBRARY_SOURCES}
    ${LIBRARY_HEADERS})

target_include_directories(${LIBRARY_NAME2} PUBLIC
    "./")
