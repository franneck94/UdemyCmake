set(EXE_SOURCES
    "main.cc")
set(EXE_INCLUDES
    "./")

add_executable(${EXECUTABLE_NAME} ${EXE_SOURCES})
target_include_directories(${EXECUTABLE_NAME} PUBLIC
    ${EXE_INCLUDES})
target_link_libraries(${EXECUTABLE_NAME} PUBLIC
    ${LIBRARY_NAME}
    fmt::fmt
    spdlog::spdlog_header_only
    nlohmann_json
    ${CONAN_CXXOPTS})
