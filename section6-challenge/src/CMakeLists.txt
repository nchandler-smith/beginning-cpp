cmake_minimum_required(VERSION 3.1)

add_executable(main main.cpp)
add_library(estimation_tool estimation_tool.cpp)
target_link_libraries(main estimation_tool)