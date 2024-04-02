cmake_minimum_required(VERSION 3.22)
project(Main)

message("Building Main ...")

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} print)
add_subdirectory(printlib)
