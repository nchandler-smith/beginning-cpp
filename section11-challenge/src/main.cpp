#include <iostream>

using std::cout;
using std::endl;

void displayMenu();

int main() {

	displayMenu();
	// validate entry
	// perform action
	// loop or exit

	return 0;
}

void displayMenu() {
	cout << "\nPlease select from the following: " << endl;
	cout << "P - Print number list" << endl;
	cout << "A - Add a number to list" << endl;
	cout << "M - Display mean of the numbers list" << endl;
	cout << "S - Display smallest number in list" << endl;
	cout << "L - Display largest number in list" << endl;
	cout << "Q - Quit \n" << endl;
}
