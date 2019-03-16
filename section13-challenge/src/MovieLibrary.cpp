#include <string>
#include "MovieLibrary.h"

MovieLibrary::MovieLibrary() {

}

std::vector<Movie> MovieLibrary::getMovies() {
    return library;
}

void MovieLibrary::addMovie(Movie movieToAdd) {
    for(const Movie &movie : library) {
        if(movie.equals(movieToAdd))
            return;
    }
    library.push_back(movieToAdd);
}