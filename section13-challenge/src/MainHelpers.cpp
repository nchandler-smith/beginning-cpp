#include <iostream>
#include <string>
#include "MovieLibrary.h"

using std::cout;
using std::endl;

std::string libraryAddMovie(MovieLibrary &library, std::string movieName, std::string movieRating, int timesWatched) {
    bool success {};
    success = library.addMovie(movieName, movieRating, timesWatched);
    if(success)
        return movieName + " added.";
    return movieName + " already in library.";
}

std::string incrementMovie(MovieLibrary &library, std::string movieName) {
    bool success {};
    success = library.incrementTimesWatched(movieName);
    if(success)
        return movieName + " watch incremented.";
    return movieName + " not found.";
}