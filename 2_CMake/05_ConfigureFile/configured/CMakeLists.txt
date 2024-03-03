# Note: If you open the config.hhp.in file in VSCode it is normal that the code has red squiggly lines.
# VSCode think its a normal header file, which it isnt.
# But thats okay.
configure_file(
    "config.hpp.in"
    "${CMAKE_BINARY_DIR}/configured_files/include/config.hpp" ESCAPE_QUOTES
)
