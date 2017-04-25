project(Playground)
cmake_minimum_required(VERSION 2.8.12)

include(${CMAKE_ROOT}/Modules/ExternalProject.cmake)

# include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
# conan_basic_setup()

FILE(GLOB SRC src/*.c)
add_executable(main ${SRC})

# target_link_libraries(main ${CONAN_LIBS})


# ExternalProject_Add(
#     gtest
#     GIT_REPOSITORY    https://github.com/google/googletest.git
#     GIT_TAG           master
#     SOURCE_DIR        "${CMAKE_BINARY_DIR}/googletest-src"
#     BINARY_DIR        "${CMAKE_BINARY_DIR}/googletest-build"
#     # CONFIGURE_COMMAND ""
#     # BUILD_COMMAND     ""
#     # INSTALL_COMMAND   "cp ${CMAKE_BINARY_DIR}/googletest-build/googlemock/libgmock.a ${CMAKE_BINARY_DIR}/lib"
#     # INSTALL_COMMAND   "ls googlemock"
#     INSTALL_COMMAND   ""
#     TEST_COMMAND      ""
# )

target_link_libraries(main ${CMAKE_SOURCE_DIR}/libgmock.a)

# target_link_libraries(main cJSON)
