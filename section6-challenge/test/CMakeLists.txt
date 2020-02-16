cmake_minimum_required(VERSION 3.1)

set(TARGET test_estimation_tool)
set(GTEST_DIRECTORY ../../../tools/googletest)

add_executable(${TARGET} test_estimation_tool.cpp)

enable_testing()
include_directories(${GTEST_DIRECTORY}/googletest/include ${GTEST_DIRECTORY}/googlemock/include ../src)
link_directories(${GTEST_DIRECTORY}/lib ../src)
target_link_libraries(${TARGET} gtest_main gmock_main)
add_test(NAME ${TARGET} COMMAND ${TARGET})