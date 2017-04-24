project(Playground)
cmake_minimum_required(VERSION 2.8.12)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

FILE(GLOB SRC src/*.c)
add_executable(main ${SRC})

target_link_libraries(main ${CONAN_LIBS})
