cmake_minimum_required(VERSION 3.22)
project(Main)

add_executable(${PROJECT_NAME} main.cpp)
add_library(print SHARED print.cpp)
target_link_libraries(${PROJECT_NAME} print)
