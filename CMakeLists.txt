cmake_minimum_required(VERSION 3.10.0)
project(DownloadGTestGMock)

include(CTest)

set(CMAKE_CXX_STANDARD 14)

include(DownloadGTestGMock.cmake)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

include_directories(include)

add_library(${PROJECT_NAME}_core STATIC src/impl/formula.cpp
                                        src/impl/big_formula.cpp
                                        src/impl/formula_factory.cpp
                                        src/impl/big_formula_factory.cpp
)

target_include_directories(${PROJECT_NAME}_core PUBLIC  include/
                                                PRIVATE src/incl/
)

add_executable(${PROJECT_NAME} src/impl/main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_core)

add_subdirectory(test)
