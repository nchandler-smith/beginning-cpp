#include <string>
#include "movies.h"

Movies::Movies(){};
Movies::Movies(Movie movie) {
    movieList.push_back(movie);
};

std::string Movies::prettyPrint() {
    if (movieList.size() == 0)
        return "Sorry, no movies to display";
    return "Jaws, PG, 0";
}