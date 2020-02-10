#include "../../../../tools/googletest/googletest/include/gtest/gtest.h"
#include "../../../../tools/googletest/googlemock/include/gmock/gmock.h"
#include "../src/MainHelpers.h"
#include "../src/MovieLibrary.h"

TEST (Main, AddMovieReturnsMovieNameAdded) {
    MovieLibrary library = MovieLibrary();
    std::string expectedMessage = "Jaws added.";
    std::string returnedMessage {};

    returnedMessage = libraryAddMovie(library, "Jaws", "PG", 1);

    EXPECT_EQ(expectedMessage,returnedMessage);
}

TEST (Main, AddingExistingMovieReturnsAlreadyExists) {
    MovieLibrary library = MovieLibrary();
    std::string expectedMessage = "Jaws already in library.";
    std::string returnedMessage {};

    libraryAddMovie(library, "Jaws", "PG", 1);
    returnedMessage = libraryAddMovie(library, "Jaws", "PG", 1);

    EXPECT_EQ(expectedMessage,returnedMessage);
}

TEST (Main, IncrementMovieReturnsMovieIncremented) {
    MovieLibrary library = MovieLibrary();
    libraryAddMovie(library, "Jaws", "PG", 1);
    std::string expectedMessage = "Jaws watch incremented.";
    std::string returnedMessage {};

    returnedMessage = incrementMovie(library, "Jaws");

    EXPECT_EQ(expectedMessage,returnedMessage);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST (Main, IncrementMovieWhenMovieNotInLibraryReturnsMovieNotFound) {
    MovieLibrary library = MovieLibrary();
    std::string expectedMessage = "Jaws not found.";
    std::string returnedMessage {};

    returnedMessage = incrementMovie(library, "Jaws");

    EXPECT_EQ(expectedMessage, returnedMessage);
}