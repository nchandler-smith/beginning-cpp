#include <string>
#include "movie.h"

Movie::Movie(std::string movieName) {
	name = movieName;
}

std::string Movie::getName() {
	return name;
}

