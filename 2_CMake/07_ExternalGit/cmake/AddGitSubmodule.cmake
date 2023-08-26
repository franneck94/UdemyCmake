#define a function (dir points to external/json)
#as json library is a cmake project. BY finally add_subdirectory the target of json libraries is added to our target list
#This below function should only be used when the external library we're using is also a cmake project
function(add_git_submodule dir)
#Sets an absolute path to git executable
    find_package(Git REQUIRED)

#IF there is no cmakelists file in the external library
    # if (NOT EXISTS ${CMAKE_SOURCE_DIR}/${dir}/CMakeLists.txt)
    #     execute_process(COMMAND ${GIT_EXECUTABLE}
    #         submodule update --init --recursive -- ${CMAKE_SOURCE_DIR}/${dir}
    #         WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}) #Path to root directory of project
    # endif()

    if (EXISTS ${CMAKE_SOURCE_DIR}/${dir}/CMakeLists.txt)
        message("Adding: ${dir}/CMakeLists.txt")
        add_subdirectory(${CMAKE_SOURCE_DIR}/${dir})
    else()
        message("Could not add: ${dir}/CMakeLists.txt")
    endif()
endfunction(add_git_submodule)
