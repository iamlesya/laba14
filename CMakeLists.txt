cmake_minimum_required(VERSION 3.23)
project(untitled9 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled9 main.c)

add_subdirectory(libs)
target_link_libraries(untitled9 data_structures)
