cmake_minimum_required(VERSION 3.10.0)
project(DownloadGTestGMock)

include(CTest)

set(UPDATE_DISCONNECTED_IF_AVAILABLE "UPDATE_DISCONNECTED 1")

include(DownloadProject.cmake)
download_project(PROJ           googletest
                 GIT_REPOSITORY https://github.com/google/googletest.git
                 GIT_TAG        master
                 ${UPDATE_DISCONNECTED_IF_AVAILABLE}
)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

include_directories(include)

add_library(${PROJECT_NAME}_core STATIC src/impl/formula.cpp
                                        src/impl/formula_factory.cpp
)

target_include_directories(${PROJECT_NAME}_core PUBLIC  include/
                                                PRIVATE src/incl/
)

add_executable(${PROJECT_NAME} src/impl/main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_core)
