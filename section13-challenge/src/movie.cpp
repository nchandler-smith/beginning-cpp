#include <string>
#include "Movie.h"

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

bool Movie::equals(Movie comparisonObject) const {
	if(name != comparisonObject.name || rating != comparisonObject.rating)
		return false;

	return true;
}

std::string Movie::buildMovieInfo() {
	std::string movieInfo {};
	movieInfo += name + ", ";
	movieInfo += rating + ", ";
	movieInfo += std::to_string(numberOfTimesWatched);
    return movieInfo;
}