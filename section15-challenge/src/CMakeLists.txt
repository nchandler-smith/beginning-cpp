cmake_minimum_required(VERSION 3.1)

add_library(account account.cpp)
add_library(savings_account savings_account.cpp)
add_executable(main main.cpp)
target_link_libraries(main account savings_account)
