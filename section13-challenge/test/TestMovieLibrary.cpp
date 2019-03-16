#include "../googletest/googletest/include/gtest/gtest.h"
#include "../googletest/googlemock/include/gmock/gmock.h"
#include "../src/MovieLibrary.h"
#include "../src/Movie.h"
#include <vector>

TEST (MovieLibraryTest, ByDefaultMovieLibraryIsEmpty) {
    MovieLibrary library = MovieLibrary();

    EXPECT_EQ (0, library.getMovies().size());
}

TEST (MovieLibraryTest, AddingAMovieToLibraryResultsAnotherMovieInLibrary) {
    MovieLibrary library = MovieLibrary();
    int moviesInLibrary = library.getMovies().size() + 1;
    Movie jaws = Movie("Jaws", "PG", 0);

    library.addMovie(jaws);
    
    EXPECT_EQ (moviesInLibrary, library.getMovies().size());
}

TEST (MovieLibraryTest, CannotAddMovieToLibraryIfMovieAlreadyInLibrary) {
    MovieLibrary library = MovieLibrary();
    Movie jaws = Movie("Jaws", "PG", 0);
    int numberMoviesInLibrary = library.getMovies().size() + 1;

    library.addMovie(jaws);
    library.addMovie(jaws);

    EXPECT_EQ (numberMoviesInLibrary, library.getMovies().size());
}