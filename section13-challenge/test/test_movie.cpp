#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/movie.h"

TEST (MovieTest, TheJawsMovieIsNamedJaws) {
    Movie jaws = Movie("Jaws");
    EXPECT_EQ ("Jaws", jaws.getName());
}

TEST (MovieTest, ThePGMovieIsRatedPG) {
    Movie pgMovie = Movie("PG Movie", "PG");
    EXPECT_EQ ("PG", pgMovie.getRating());
}

TEST (MovieTest, DefaultMovieRatingIsNotRated) {
    Movie notRatedMovie = Movie("Not Rated Movie");
    EXPECT_EQ ("Not Rated", notRatedMovie.getRating());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}