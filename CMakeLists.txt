cmake_minimum_required(VERSION 3.14)

project(gtest_demo)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/include)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(external/googletest)
