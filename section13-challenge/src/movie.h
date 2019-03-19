#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie {
	private:
		std::string name;
		std::string rating;
		int numberOfTimesWatched;
		
	public:
		Movie(std::string movieName, std::string movieRating="Not Rated", int movieViews=0);
        std::string getName();
		std::string getRating();
		int getNumberOfTimesWatched();
		void watch();
		void changeRating(std::string newRating);
		bool equals(const Movie &comparisonObject) const;
		std::string buildMovieInfo() const;
};
#endif // MOVIE_H