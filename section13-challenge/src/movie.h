#include <string>

class Movie {
	private:
		std::string name;
		std::string rating;
		
	public:
		Movie(std::string movieName, std::string movieRating="Not Rated");
        std::string getName();
		std::string getRating();
};