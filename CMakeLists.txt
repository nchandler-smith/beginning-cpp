cmake_minimum_required(VERSION 3.1)
project (template)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(GTEST_DIRECTORY extern/googletest)

add_subdirectory(${GTEST_DIRECTORY} ./build)

add_subdirectory(./utils/random_integer)
add_subdirectory(./section6-challenge)
