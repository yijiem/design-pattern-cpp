cmake_minimum_required(VERSION 3.5)
project(design_pattern_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES pimpl/example.cpp)
add_library(pimpl_table pimpl/table.h pimpl/table_impl.cpp)
add_executable(example_pimpl ${SOURCE_FILES})
target_link_libraries(example_pimpl pimpl_table)

add_library(model observer/model.cpp observer/subject.cpp)
add_library(view observer/view.cpp)
add_executable(example_observer observer/example.cpp)
target_link_libraries(example_observer model view)

add_library(cow cow/cow_string.cpp)
add_executable(example_cow cow/example.cpp)
target_link_libraries(example_cow cow)