cmake_minimum_required(VERSION 3.1)

set(TARGET main_tests)
set(GTEST_DIRECTORY ../../../tools/googletest)

add_executable(${TARGET} test_main.cpp)

enable_testing()
include_directories(${GTEST_DIRECTORY}/googletest/include ${GTEST_DIRECTORY}/googlemock/include ../src)
link_directories(${GTEST_DIRECTORY}/lib ../src)


# Now simply link against gtest or gtest_main as needed. 
target_link_libraries(${TARGET} gtest_main print gmock_main)
add_test(NAME example_test COMMAND ${TARGET})
