#include <string>
#include "MovieLibrary.h"

std::string libraryAddMovie(MovieLibrary &library, std::string movieName, std::string movieRating, int timesWatched);
std::string incrementMovie(MovieLibrary &library, std::string movieName);