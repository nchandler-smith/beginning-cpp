#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/Movie.h"

TEST (MovieTest, MovieHasAName) {
    std::string movieName {"Jaws"};

    Movie jaws = Movie(movieName);

    EXPECT_EQ (movieName, jaws.getName());
}

TEST (MovieTest, MovieHasARating) {
    std::string movieName {"Star Wars"};
    std::string movieRating {"PG"};

    Movie pgMovie = Movie(movieName, movieRating);

    EXPECT_EQ (movieRating, pgMovie.getRating());
}

TEST (MovieTest, DefaultMovieRatingIsNotRated) {
    std::string movieName {"Not Rated Movie"};
    std::string defaultRating {"Not Rated"};

    Movie notRatedMovie = Movie(movieName);

    EXPECT_EQ (defaultRating, notRatedMovie.getRating());
}

TEST (MovieTest, DefaultNumberTimesWatchedIs0) {
    std::string movieName {"Jaws"};
    int defaultNumberOfWatches = 0;

    Movie unwatchedMovie = Movie(movieName);

    EXPECT_EQ (defaultNumberOfWatches, unwatchedMovie.getNumberOfTimesWatched());
}

TEST (MovieTest, WatchingMovieIncrementsNumberOfWatches) {
    Movie movieToWatch = Movie("We're Watching This");
    int expectedNumberTimesWatched = movieToWatch.getNumberOfTimesWatched() + 1;

    movieToWatch.watch();

    EXPECT_EQ (expectedNumberTimesWatched, movieToWatch.getNumberOfTimesWatched());
}

TEST (MovieTest, RMovieChangedToPGRating) {
    std::string movieName {"Jaws"};
    std::string startRating {"R"} ;
    std::string finalRating {"PG"};
    Movie jaws = Movie(movieName, startRating);

    jaws.changeRating(finalRating);

    EXPECT_EQ(finalRating, jaws.getRating());
}

TEST (MovieTest, MoviesAreEqualIfNamesAndRatingsAreEqual) {
    std::string movieName {"Jaws"};
    std::string rating {"PG"};

    Movie jaws1 {movieName, rating, 1};
    Movie jaws2 {movieName, rating, 1};

    EXPECT_TRUE(jaws1.equals(jaws2));
}

TEST (MovieTest, MoviesAreNotEqualIfRatingsAreNotEqual) {
    std::string name {"Jaws"};
    std::string rating1 {"PG"};
    std::string rating2 {"R"};

    Movie jaws1 {name, rating1};
    Movie jaws2 {name, rating2};

    EXPECT_FALSE(jaws1.equals(jaws2)); 
}

TEST (MovieTest, MoviesAreNotEqualIfNamesAreNotEqual) {
    std::string name1 {"Jaws"};
    std::string name2 {"Not Jaws"};
    std::string rating {"PG"};

    Movie jaws1 {name1, rating};
    Movie jaws2 {name2, rating};
    EXPECT_FALSE(jaws1.equals(jaws2));
}
