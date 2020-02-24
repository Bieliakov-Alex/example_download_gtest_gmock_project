cmake_minimum_required(VERSION 3.10.0)

project(unit_tests_download_gtest_gmock)

set(LIB_NAME download_gtest_gmock_mocks)

add_library(${LIB_NAME} INTERFACE)
target_include_directories(${LIB_NAME} INTERFACE ${PROJECT_SOURCE_DIR}/mocks_include)
target_link_libraries(${LIB_NAME} INTERFACE DownloadGTestGMock_core)
set(PRIVATE_HEADERS $<TARGET_PROPERTY:DownloadGTestGMock_core,INCLUDE_DIRECTORIES>)

add_executable(${PROJECT_NAME} formula_test.cpp
                               big_formula_test.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE ${PRIVATE_HEADERS})

target_link_libraries(${PROJECT_NAME} gtest_main
                                      gmock_main
                                      ${LIB_NAME}
)
