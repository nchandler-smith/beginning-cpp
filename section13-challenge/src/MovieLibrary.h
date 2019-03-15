#include <string>
#include <vector>
#include "Movie.h"

class MovieLibrary {
	private:
		std::vector<Movie> library;

	public:
		MovieLibrary();
        std::vector<Movie> getMovies();
        void addMovie(Movie movieToAdd);

};