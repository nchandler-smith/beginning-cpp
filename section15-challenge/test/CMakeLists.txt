cmake_minimum_required(VERSION 3.1)

set(TARGET test_runner)

add_executable(${TARGET} test_main.cpp test_account.cpp)

enable_testing()
include_directories(../googletest/googletest/include ../googletest/googlemock/include ../src)
find_package(GTest REQUIRED) 
link_directories(../googletest/lib ../src)


# Now simply link against gtest or gtest_main as needed. 
target_link_libraries(${TARGET} gtest_main gmock_main account)
add_test(NAME example_test COMMAND ${TARGET})
