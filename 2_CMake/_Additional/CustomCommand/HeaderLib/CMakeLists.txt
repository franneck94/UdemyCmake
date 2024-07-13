# Create the header-only library target
add_library(HeaderLib INTERFACE)
target_include_directories(HeaderLib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
