cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)

FILE(GLOB_RECURSE PARSER_SOURCES parser/*.cpp)
set(SOURCE_FILES ${SOURCE_FILES} ${PARSER_SOURCES})

include_directories(include)
include_directories(src)


add_executable(mysqlparser ${SOURCE_FILES})
add_dependencies(mysqlparser antlr4cpp)
target_link_libraries(mysqlparser libantlr4-runtime.a)
