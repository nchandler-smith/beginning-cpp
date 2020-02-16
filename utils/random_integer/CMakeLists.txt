cmake_minimum_required(VERSION 3.1)
project (random_integer)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(random_integer random_integer.cpp)
add_executable(random_integer_example random_integer_example.cpp)
target_link_libraries(random_integer_example random_integer)