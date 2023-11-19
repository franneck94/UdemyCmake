set(EXE_SOURCES
    "main.cc")
set(EXE_INCLUDES
    "./")

add_executable(${EXECUTABLE_NAME} ${EXE_SOURCES})
target_include_directories(${EXECUTABLE_NAME} PUBLIC
    ${EXE_INCLUDES})

target_link_libraries(
    ${EXECUTABLE_NAME}
    PUBLIC ${LIBRARY_NAME}
        nlohmann_json::nlohmann_json
        fmt::fmt
        spdlog::spdlog
        cxxopts::cxxopts)

if (ENABLE_WARNINGS)
    target_set_warnings(
        ${EXECUTABLE_NAME}
        ON
        OFF
    )
endif()

if (ENABLE_LTO)
    target_enable_lto(
        ${EXECUTABLE_NAME}
        ${ENABLE_LTO}
    )
endif()
