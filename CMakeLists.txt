cmake_minimum_required(VERSION 3.8)

set(This SG_Rectangle)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

add_subdirectory(source)

add_subdirectory(tests)