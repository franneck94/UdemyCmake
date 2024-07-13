set(CUSTOM_TARGET_NAME "CustomPythonTarget")
if(NOT TARGET ${CUSTOM_TARGET_NAME})
    add_custom_target(
        ${CUSTOM_TARGET_NAME}
        COMMAND python CustomPythonTarget.py --directory ${PROJECT_SOURCE_DIR}/src
        WORKING_DIRECTORY
        ${PROJECT_SOURCE_DIR}/scripts
    )
    add_dependencies(${CUSTOM_TARGET_NAME} Main)
endif()
