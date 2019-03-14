#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/movie.h"

TEST (MovieTest, TheJawsMovieIsNamedJaws) {
    Movie jaws = Movie("Jaws");
    EXPECT_EQ ("Jaws", jaws.getName());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}