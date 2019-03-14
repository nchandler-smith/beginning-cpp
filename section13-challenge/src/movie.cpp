#include <string>
#include "movie.h"

Movie::Movie(std::string movieName) {
	name = movieName;
}

Movie::Movie(std::string movieName, std::string movieRating) 
	: name{movieName}, rating{movieRating} {
}

std::string Movie::getName() {
	return name;
}

std::string Movie::getRating() {
	return rating;
}
