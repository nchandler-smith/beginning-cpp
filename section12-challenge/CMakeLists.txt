cmake_minimum_required(VERSION 3.1)
project (challenge12)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(challenge12 src/main.cpp)

enable_testing()
find_package(GTest REQUIRED)
include_directories(googletest/googletest/include)
link_directories(googletest/lib)

add_executable(challenge12_test test/test_main.cpp)
target_link_libraries(challenge12_test gtest)