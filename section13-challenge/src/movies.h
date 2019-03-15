#include <string>
#include <vector>
#include "movie.h"

class Movies{
    public:
        Movies();
        Movies(Movie movie);
        std::string prettyPrint();
    
    private:
        std::vector<Movie> movieList {};
};