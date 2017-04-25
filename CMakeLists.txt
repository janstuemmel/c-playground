project(Playground)
cmake_minimum_required(VERSION 2.8.12)

include(${CMAKE_ROOT}/Modules/ExternalProject.cmake)

# include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
# conan_basic_setup()

FILE(GLOB SRC src/*.c)
add_executable(main ${SRC})

LINK_DIRECTORIES(${CMAKE_BINARY_DIR}/lib)
TARGET_LINK_LIBRARIES(main libcjson.so)




# target_link_libraries(main ${CMAKE_SOURCE_DIR}/lib/libcjson.a)

# target_link_libraries(main cJSON)
