cmake_minimum_required(VERSION 3.22)
project(CrossProduct)

find_package(Eigen3 REQUIRED)
find_package(fmt REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${EIGEN3_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} fmt::fmt)
