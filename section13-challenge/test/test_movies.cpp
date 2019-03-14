#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/movies.h"

TEST (MoviesTest, MoviesPrettyPrintWhenNoMoviesReturnsSorryNoMoviesToDisplay) {
    Movies movies = Movies();
    EXPECT_EQ("Sorry, no movies to display", movies.prettyPrint());
}


