# FindYourLibraryName.cmake
set(LibExample_ROOT_DIR ${PROJECT_SOURCE_DIR}/external/)
set(LibExample_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/external/inc/)
set(LibExample_LIBRARIES ${PROJECT_SOURCE_DIR}/external/lib/LibExample.lib)

if (EXISTS ${LibExample_LIBRARIES})
    set(LibExample_FOUND TRUE)
else()
    set(LibExample_FOUND FALSE)
    message("LibExample Lib not found!")
endif()
