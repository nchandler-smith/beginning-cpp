#include <string>
#include <vector>
#include "Movie.h"

class MovieLibrary {
	private:
		std::vector<Movie> library;

	public:
		MovieLibrary();
        std::vector<Movie> getMovies();
        bool addMovie(Movie movieToAdd);
		std::string buildLibraryInfo() const;
		void incrementTimesWatched(std::string movieName);
};