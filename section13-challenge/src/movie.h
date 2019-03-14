#include <string>

class Movie {
	private:
		std::string name;
		std::string rating;
		
	public:
		Movie(std::string movieName);
		Movie(std::string movieName, std::string movieRating);
        std::string getName();
		std::string getRating();
};