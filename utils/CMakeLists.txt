cmake_minimum_required(VERSION 2.8)

set (CMAKE_CXX_STANDARD 11)

project(filler-utils)

list(APPEND HEADERS
  "timeparser.hpp"
  "random.hpp"
  "timer.hpp"
)

list(APPEND SOURCES
  "timeparser.cpp"
  "random.cpp"
  "timer.cpp"
)

list(APPEND SRC
  ${HEADERS}
  ${SOURCES}
)

add_library(utils STATIC ${SRC})
