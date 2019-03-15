#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/movies.h"
#include "../src/movie.h"

TEST (MoviesTest, MoviesPrettyPrintWhenNoMoviesReturnsSorryNoMoviesToDisplay) {
    Movies movies = Movies();
    EXPECT_EQ("Sorry, no movies to display", movies.prettyPrint());
}

TEST (MoviesTest, MoviesAddJawsMovieResultsInJawsExistingInMovies) {
    Movie jaws = Movie("Jaws", "PG", 0);
    Movies movies = Movies(jaws);
    
    EXPECT_EQ("Jaws, PG, 0", movies.prettyPrint());
}

// TEST (MoviesTest, MoviesAddJawsMovieResultsInJawsExistingInMovies) {
//     Movies movies = Movies();
//     Movie jaws = Movie("Jaws", "PG", 0);
//     movies.add(jaws);
//     EXPECT_TRUE(movies.exists("Jaws"));
// }

// TEST (MoviesTest, MoviesPrettyPrintWhenOnlyJawsMovieReturnsOnlyJawsInformation) {
//     Movies movies = Movies();

//     EXPECT_EQ("Sorry, no movies to display", movies.prettyPrint());
// }


