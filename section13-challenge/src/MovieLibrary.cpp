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

std::string MovieLibrary::buildLibraryInfo() const {
    if(library.size() == 0)
        return "Sorry, no movies to display.";
    std::string libraryInfo {};
    for(const Movie &movie : library) {
        libraryInfo += movie.buildMovieInfo() + "\n";
    }
    return libraryInfo;
}

bool MovieLibrary::incrementTimesWatched(std::string movieName) {
    for(Movie &movie : library){
        if(movie.getName() == movieName) {
            movie.watch();
            return true;
        }
    }
    return false;
}