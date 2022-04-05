if (ENABLE_TESTING)
    include(CTest)

    set(TEST_MAIN "unit_tests")
    set(TEST_SOURCES
        "main.cc")
    set(TEST_INCLUDES
        "./")

    add_executable(${TEST_MAIN} ${TEST_SOURCES})
    target_include_directories(${TEST_MAIN} PUBLIC
        ${TEST_INCLUDES})
    target_link_libraries(${TEST_MAIN} PUBLIC
        ${LIBRARY_NAME}
        ${CONAN_CATCH2})

    add_test(NAME ${LIBRARY_NAME}.${TEST_MAIN} COMMAND ${TEST_MAIN})
endif()
