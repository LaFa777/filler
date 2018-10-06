cmake_minimum_required(VERSION 2.8)

project(filler)

list(APPEND HEADERS
  "range.hpp"
)

list(APPEND SOURCES
  "range.cpp"
)

list(APPEND SRC
  ${SOURCES}
  ${HEADERS}
)

add_library(include STATIC ${SRC})
