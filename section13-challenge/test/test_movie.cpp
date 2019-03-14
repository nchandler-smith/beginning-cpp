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

TEST (MovieTest, DefaultNumberTimesWatchedIs0) {
    Movie unwatchedMovie = Movie("The Unwatchers");
    EXPECT_EQ (0, unwatchedMovie.getNumberOfTimesWatched());
}

TEST (MovieTest, IncrementUnwatchedMovieHasBeenWatchedOnce) {
    Movie movieToWatch = Movie("We're Watching This");
    movieToWatch.watch();
    EXPECT_EQ (1, movieToWatch.getNumberOfTimesWatched());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}