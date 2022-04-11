if (ENABLE_TESTING)
    set(TEST_MAIN
        "unit_tests")
    set(TEST_SOURCES
        "main.cc")

    add_executable(${TEST_MAIN} ${TEST_SOURCES})
    target_link_libraries(${TEST_MAIN} PUBLIC
        ${LIBRARY_NAME}
        ${CONAN_CATCH2})

endif()
