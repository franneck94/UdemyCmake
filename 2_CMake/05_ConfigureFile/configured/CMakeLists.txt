#Used to edit or configure files cmake_binary_dir is an absolute path to our build directory
configure_file(
    "config.hpp.in"
    "${CMAKE_BINARY_DIR}/configured_files/include/config.hpp" ESCAPE_QUOTES
)
