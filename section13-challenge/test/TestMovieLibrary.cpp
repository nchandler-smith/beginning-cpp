#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/MovieLibrary.h"
#include "../src/Movie.h"
#include <vector>

TEST (MovieLibraryTest, ByDefaultMovieLibraryIsEmpty) {
    MovieLibrary library = MovieLibrary();
    EXPECT_EQ (0, library.getMovies().size());
}

TEST (MovieLibraryTest, AddingAMovieToLibraryResultsInOneMovie) {
    MovieLibrary library = MovieLibrary();
    Movie jaws = Movie("Jaws", "PG", 0);
    library.addMovie(jaws);
    EXPECT_EQ (1, library.getMovies().size());
}
