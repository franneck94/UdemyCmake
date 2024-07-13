set(CUSTOM_TARGET_NAME "CustomPythonTarget")
if(NOT TARGET ${CUSTOM_TARGET_NAME})
    add_custom_target(
        ${CUSTOM_TARGET_NAME}
        COMMAND python CustomPythonTarget.py --input_dir ${PROJECT_SOURCE_DIR}/src --output_dir ${PROJECT_BINARY_DIR}
        WORKING_DIRECTORY
        ${PROJECT_SOURCE_DIR}/scripts
        # DEPENDS Main
    )
    add_dependencies(${CUSTOM_TARGET_NAME} Main)
endif()
