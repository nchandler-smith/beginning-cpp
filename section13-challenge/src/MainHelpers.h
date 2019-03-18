#include <string>
#include "MovieLibrary.h"

void addMovie(MovieLibrary &library,
              std::string movieName,
              std::string movieRating,
              int timesWatched);

void incrementMovie(MovieLibrary &library,
                    std::string movieName);