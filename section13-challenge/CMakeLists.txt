cmake_minimum_required(VERSION 3.1)
project (movieLibrary)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(GTEST_DIRECTORY ../../../tools/googletest)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${GTEST_DIRECTORY} ./build)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
