# Note:
# configure_file: Copy a file to another location and modify its contents.
# add_custom_command: Creates a new file

set(CUSTOM_TARGET_NAME "CustomPythonTarget")
if(NOT TARGET ${CUSTOM_TARGET_NAME})
    add_custom_target(${CUSTOM_TARGET_NAME}
                      DEPENDS "${PROJECT_BINARY_DIR}/Stats.txt")

    add_custom_command(
        OUTPUT "${PROJECT_BINARY_DIR}/Stats.txt"
        COMMAND python CustomPythonTarget.py --input_dir
                ${PROJECT_SOURCE_DIR}/src --output_dir ${PROJECT_BINARY_DIR}
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/scripts
        DEPENDS ${PROJECT_SOURCE_DIR}/src/main.cc)
endif()
