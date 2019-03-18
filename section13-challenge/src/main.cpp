#include <iostream>
#include "Movie.h"
#include "MovieLibrary.h"

using std::cout;
using std::endl;

void addMovie(MovieLibrary &library,
              std::string movieName,
              std::string movieRating,
              int timesWatched);

void incrementMovie(MovieLibrary &library,
                    std::string movieName);

int main() {
    cout << "\n-----------------------" << endl;
    MovieLibrary library = MovieLibrary();
    cout << library.buildLibraryInfo() << endl;

    addMovie(library, "Big", "PG-13", 2);
    addMovie(library, "Star Wars", "PG", 5);
    addMovie(library, "Cinderella", "G", 7);

    cout <<"\n========================" << endl;
    cout <<library.buildLibraryInfo() <<endl;
    
    cout <<"\n========================" << endl;
    addMovie(library, "Cinderella", "G", 7);
    addMovie(library, "Ice Age", "PG", 12);

    cout <<"\n========================" << endl;
    cout <<library.buildLibraryInfo() <<endl;

    cout <<"\n========================" << endl;
    incrementMovie(library, "Ice Age");
    incrementMovie(library, "Big");
    incrementMovie(library, "Terminator");
    addMovie(library, "Big", "PG-13", 1);
    cout <<library.buildLibraryInfo() <<endl;

    return 0;
}

void addMovie(MovieLibrary &library,
              std::string movieName,
              std::string movieRating,
              int timesWatched) {
    bool success {};
    success = library.addMovie(movieName, movieRating, timesWatched);
    if(success) {
        cout << movieName << " added." << endl;
        return;
    }
    cout << "Could not add " << movieName << "." << endl;
}

void incrementMovie(MovieLibrary &library,
                    std::string movieName) {
    bool success {};
    success = library.incrementTimesWatched(movieName);
    if(success) {
        cout << movieName << " watch counter incremented." << endl;
        return;
    }
    cout << "Could not increment " << movieName << "." << endl;
}