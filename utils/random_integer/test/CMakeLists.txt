cmake_minimum_required(VERSION 3.1)

set(TARGET random_integer_test)
set(GTEST_DIRECTORY ../../../tools/googletest)

add_executable(${TARGET} random_integer_test.cpp)

enable_testing()
include_directories(${GTEST_DIRECTORY}/googletest/include ${GTEST_DIRECTORY}/googlemock/include ../src)
link_directories(../googletest/lib ../src)


# Now simply link against gtest or gtest_main as needed. 
target_link_libraries(${TARGET} gtest_main random_integer gmock_main)
add_test(NAME example_test COMMAND ${TARGET})
