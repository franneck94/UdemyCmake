set(LIBRARY_SOURCES
    "my_lib.cc")
set(LIBRARY_INCLUDES
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include")

add_library(${LIBRARY_NAME} STATIC
    ${LIBRARY_SOURCES})
target_link_libraries(${LIBRARY_NAME} PUBLIC
    nlohmann_json)
target_include_directories(${LIBRARY_NAME} PUBLIC
    ${LIBRARY_INCLUDES})
