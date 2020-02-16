cmake_minimum_required(VERSION 3.1)
project (section_6_challenge)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(GTEST_DIRECTORY ../../../tools/googletest)

add_subdirectory(${GTEST_DIRECTORY} ../build)