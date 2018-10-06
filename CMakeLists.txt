cmake_minimum_required(VERSION 2.8)

add_subdirectory(include)

set (CMAKE_CXX_STANDARD 11)

project(filler)
add_executable(${PROJECT_NAME} "main.cpp")
target_link_libraries(${PROJECT_NAME} include)
