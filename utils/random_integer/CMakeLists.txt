cmake_minimum_required(VERSION 3.1)
project (template)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
