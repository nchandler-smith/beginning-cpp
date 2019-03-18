#include <iostream>
#include "MainHelpers.h"

using std::cout;
using std::endl;

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
