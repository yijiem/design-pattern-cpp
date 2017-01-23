cmake_minimum_required(VERSION 3.5)
project(design_pattern_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    pimpl/README.md
    LICENSE
    README.md)

add_executable(design_pattern_cpp ${SOURCE_FILES})