#include <string>

class Movie {
	private:
		std::string name;
		
	public:
		Movie(std::string movieName);
        std::string getName();
};