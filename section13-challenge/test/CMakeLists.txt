cmake_minimum_required(VERSION 3.1)

set(TARGET movie_tests)

add_executable(${TARGET} test_movie.cpp)

enable_testing()
include_directories(../googletest/googletest/include ../googletest/googlemock/include ../src)
find_package(GTest REQUIRED) 
link_directories(../googletest/lib ../src)


# Now simply link against gtest or gtest_main as needed. 
target_link_libraries(${TARGET} gtest_main movie gmock_main)
add_test(NAME example_test COMMAND ${TARGET})
