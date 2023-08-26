add_subdirectory(my_lib)
add_subdirectory(my_lib2)
target_include_directories(${LIBRARY_NAME} PUBLIC
    "${CMAKE_BINARY_DIR}/configured_files/include")
