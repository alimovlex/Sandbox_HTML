cmake_minimum_required(VERSION 3.26)
project(webc C)

set(CMAKE_C_STANDARD 17)
include_directories(inc)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
add_executable(webc.cgi main.c
                        src/webpage.c)

