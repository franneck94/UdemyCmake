find_package(Doxygen)

if (DOXYGEN_FOUND)
message("Doxygen is installed , inside if case")
    add_custom_target(
        docs
        ${DOXYGEN_EXECUTABLE}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/docs
    )
    message("Can run make docs from the makefile generated")
endif()
