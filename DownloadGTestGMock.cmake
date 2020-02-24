set(GTEST_GMOCK_PROJECT "googletest")
set(GTEST_GMOCK_GIT_REPOSITORY "https://github.com/google/googletest.git")
set(GTEST_GMOCK_GIT_TAG "master")
set(UPDATE_DISCONNECTED_IF_AVAILABLE "UPDATE_DISCONNECTED 1")
set(GTEST_GMOCK_DOWNLOAD_DIR "${CMAKE_BINARY_DIR}/${GTEST_GMOCK_PROJECT}-download")
set(GTEST_GMOCK_SOURCE_DIR "${CMAKE_BINARY_DIR}/${GTEST_GMOCK_PROJECT}-src")
set(GTEST_GMOCK_BINARY_DIR "${CMAKE_BINARY_DIR}/${GTEST_GMOCK_PROJECT}-build")

set(${GTEST_GMOCK_PROJECT}_SOURCE_DIR "${GTEST_GMOCK_SOURCE_DIR}")
set(${GTEST_GMOCK_PROJECT}_BINARY_DIR "${GTEST_GMOCK_BINARY_DIR}")

configure_file(GTestGMock.CMakeLists.cmake.in
               "${GTEST_GMOCK_DOWNLOAD_DIR}/CMakeLists.txt"
)

execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}"
                    -D "CMAKE_MAKE_PROGRAM:FILE=${CMAKE_MAKE_PROGRAM}"
                    .
                RESULT_VARIABLE result
                WORKING_DIRECTORY "${GTEST_GMOCK_DOWNLOAD_DIR}"
)
if(result)
    message(FATAL_ERROR "CMake step for ${GTEST_GMOCK_PROJECT} failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
                RESULT_VARIABLE result
                WORKING_DIRECTORY "${GTEST_GMOCK_DOWNLOAD_DIR}"
)
if(result)
    message(FATAL_ERROR "Build step for ${GTEST_GMOCK_PROJECT} failed: ${result}")
endif()
