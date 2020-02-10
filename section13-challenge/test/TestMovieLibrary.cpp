#include "../../../../tools/googletest/googletest/include/gtest/gtest.h"
#include "../../../../tools/googletest/googlemock/include/gmock/gmock.h"
#include "../src/MovieLibrary.h"
#include "../src/movie.h"
#include <vector>

TEST (MovieLibraryTest, ByDefaultMovieLibraryIsEmpty) {
    MovieLibrary library = MovieLibrary();

    EXPECT_EQ (0, library.getMovies().size()); // still using getMovies. Could be replaced with buildInfo parsed by test helper function.
}

TEST (MovieLibraryTest, AddingAMovieToLibraryResultsAnotherMovieInLibrary) {
    MovieLibrary library = MovieLibrary();
    int moviesInLibrary = library.getMovies().size() + 1;
    bool addIsSuccessful {};

    addIsSuccessful = library.addMovie("Jaws", "PG", 0);
    
    EXPECT_EQ (moviesInLibrary, library.getMovies().size());
    EXPECT_TRUE(addIsSuccessful);
}

TEST (MovieLibraryTest, CannotAddMovieToLibraryIfMovieAlreadyInLibrary) {
    MovieLibrary library = MovieLibrary();
    int numberMoviesInLibrary = library.getMovies().size() + 1;

    library.addMovie("Jaws", "PG", 0);
    bool addIsSuccessful{library.addMovie("Jaws", "PG", 0)};

    EXPECT_EQ (numberMoviesInLibrary, library.getMovies().size());
    EXPECT_FALSE(addIsSuccessful);
}

TEST (MovieLibraryTest, BuildLibraryInfoReturnsMovieInfoOneEachLine) {
    MovieLibrary library = MovieLibrary();
    std::string expectedLibraryInfo {};
    expectedLibraryInfo += "Jaws, PG, 0\n";
    expectedLibraryInfo += "Terminator, R, 1\n";

    library.addMovie("Jaws", "PG", 0);
    library.addMovie("Terminator", "R", 1);
    std::string returnedLibraryInfo {library.buildLibraryInfo()};

    EXPECT_EQ(expectedLibraryInfo, returnedLibraryInfo);
}

TEST (MovieLibraryTest, IncrementMovieAdds1ToWatchedCounter) {
    MovieLibrary library = MovieLibrary();
    library.addMovie("Jaws", "PG", 0);
    int expectedNumberOfTimesWatched {1};

    bool incrementValid = library.incrementTimesWatched("Jaws");

    EXPECT_TRUE(incrementValid);
    EXPECT_EQ("Jaws, PG, 1\n", library.buildLibraryInfo());
}

TEST (MovieLibraryTest, IncrementMovieReturnsFalseIfMovieNotInLibrary) {
    MovieLibrary library = MovieLibrary();
    library.addMovie("Jaws", "PG");
    int expectedNumberOfTimesWatched {1};

    bool incrementValid = library.incrementTimesWatched("Terminator");

    EXPECT_FALSE(incrementValid);
    EXPECT_EQ("Jaws, PG, 0\n", library.buildLibraryInfo());
}

TEST (MovieLibraryTest, BuildLibraryInfoReturnsSpecialMessageIfNoMoviesInLibrary) {
    MovieLibrary library = MovieLibrary();
    std::string expectMessage {"Sorry, no movies to display."};

    std::string returnMessage {library.buildLibraryInfo()};

    EXPECT_EQ(expectMessage, returnMessage);
}