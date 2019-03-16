#include <string>
#include "MovieLibrary.h"

MovieLibrary::MovieLibrary() {

}

std::vector<Movie> MovieLibrary::getMovies() {
    return library;
}

bool MovieLibrary::addMovie(Movie movieToAdd) {
    for(const Movie &movie : library) {
        if(movie.equals(movieToAdd))
            return false;
    }
    library.push_back(movieToAdd);
    return true;
}