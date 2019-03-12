cmake_minimum_required(VERSION 3.1)

add_library(print print.cpp)
add_executable(challenge12 main.cpp)
target_link_libraries(challenge12 print)
