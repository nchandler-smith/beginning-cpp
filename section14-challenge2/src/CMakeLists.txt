cmake_minimum_required(VERSION 3.1)

add_library(Mystring Mystring.cpp)
add_executable(main main.cpp)
target_link_libraries(main Mystring)
