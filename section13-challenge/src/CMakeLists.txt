cmake_minimum_required(VERSION 3.1)

add_library(Movie Movie.cpp)
add_library(MovieLibrary MovieLibrary.cpp)
add_library(MainHelpers MainHelpers.cpp)
add_executable(main main.cpp)
target_link_libraries(main Movie MovieLibrary MainHelpers)
