#include <string>
#include "MovieLibrary.h"

MovieLibrary::MovieLibrary() {

}

std::vector<Movie> MovieLibrary::getMovies() {
    return library;
}

void MovieLibrary::addMovie(Movie movieToAdd) {
    library.push_back(movieToAdd);
}