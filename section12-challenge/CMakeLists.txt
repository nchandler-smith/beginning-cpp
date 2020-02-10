cmake_minimum_required(VERSION 3.1)
project (challenge12)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(../../../tools/googletest ./build)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
