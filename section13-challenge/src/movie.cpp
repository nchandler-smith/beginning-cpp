#include <string>
#include "movie.h"

Movie::Movie(std::string movieName, std::string movieRating, int movieViews) 
	: name{movieName}, rating{movieRating}, numberOfTimesWatched{movieViews} {
}

std::string Movie::getName() {
	return name;
}

std::string Movie::getRating() {
	return rating;
}

int Movie::getNumberOfTimesWatched() {
	return numberOfTimesWatched;
}

void Movie::watch() {
	numberOfTimesWatched++;
}

void Movie::changeRating(std::string newRating) {
	rating = newRating;
}
