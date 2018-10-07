cmake_minimum_required(VERSION 2.8)

add_subdirectory(include)
add_subdirectory(utils)

set (CMAKE_CXX_STANDARD 11)

project(filler)
add_executable(${PROJECT_NAME} "main.cpp")
target_link_libraries(${PROJECT_NAME} include)
target_link_libraries(${PROJECT_NAME} utils)
