cmake_minimum_required(VERSION 3.1)

add_library(helper helper.cpp)
add_executable(template main.cpp)
target_link_libraries(template helper)
