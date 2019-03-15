#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/Movie.h"

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

TEST (MovieTest, RMovieChangedToPGRating) {
    Movie jaws = Movie("Jaws", "R");
    jaws.changeRating("PG");
    EXPECT_EQ("PG", jaws.getRating());
}

TEST (MovieTest, MoviesAreEqualIfNamesAndRatingsAreEqual) {
    Movie jaws1 {"Jaws", "PG", 1};
    Movie jaws2 {"Jaws", "PG", 1};
    EXPECT_TRUE(jaws1.equals(jaws2));
}

TEST (MovieTest, MoviesAreNotEqualIfRatingsAreNotEqual) {
    Movie jaws1 {"Jaws", "PG", 1};
    Movie jaws2 {"Jaws", "R", 1};
    EXPECT_FALSE(jaws1.equals(jaws2)); 
}

TEST (MovieTest, MoviesAreNotEqualIfNamesAreNotEqual) {
    Movie jaws1 {"Jaws", "PG", 1};
    Movie jaws2 {"Return Of Lizard Man", "PG", 1};
    EXPECT_FALSE(jaws1.equals(jaws2));}
