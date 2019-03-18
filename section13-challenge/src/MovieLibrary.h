#include <string>
#include <vector>
#include "Movie.h"

class MovieLibrary {
	private:
		std::vector<Movie> library;

	public:
		MovieLibrary();
        std::vector<Movie> getMovies();
        bool addMovie(std::string movieName, 
					  std::string movieRating, 
					  int numberTimesWatched=0);
		std::string buildLibraryInfo() const;
		bool incrementTimesWatched(std::string movieName);
};