#include <iostream>
#include "MainHelpers.h"

using std::cout;
using std::endl;

int main() {
    cout << "\n-----------------------" << endl;
    MovieLibrary library = MovieLibrary();
    cout << library.buildLibraryInfo() << endl;

    cout << libraryAddMovie(library, "Big", "PG-13", 2) << endl;
    cout << libraryAddMovie(library, "Star Wars", "PG", 5) << endl;
    cout << libraryAddMovie(library, "Cinderella", "G", 7) <<  endl;

    cout <<"\n========================" << endl;
    cout <<library.buildLibraryInfo() <<endl;
    
    cout <<"\n========================" << endl;
    cout << libraryAddMovie(library, "Cinderella", "G", 7) << endl;
    cout << libraryAddMovie(library, "Ice Age", "PG", 12) << endl;

    cout <<"\n========================" << endl;
    cout <<library.buildLibraryInfo() <<endl;

    cout <<"\n========================" << endl;
    cout << incrementMovie(library, "Ice Age") << endl;
    cout << incrementMovie(library, "Big") << endl;
    cout << incrementMovie(library, "Terminator") << endl;
    cout << libraryAddMovie(library, "Big", "PG-13", 1) << endl;
    
    cout <<"\n========================" << endl;
    cout <<library.buildLibraryInfo() <<endl;

    return 0;
}
