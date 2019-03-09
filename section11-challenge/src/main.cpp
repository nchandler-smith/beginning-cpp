#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void displayMenu();
char processEntry();
bool performAction(char action);

int main() {
	char action {};

	displayMenu();
	action = processEntry();
	performAction(action);
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

char processEntry() {
	char userResponse {};
	cin >> userResponse;
	return std::toupper(userResponse);
}

bool performAction(char action){
	
	switch(action) {
		case 'P': cout << "P pressed" << endl; break;
		case 'A': cout << "A pressed" << endl; break;
		case 'M': cout << "M pressed" << endl; break;
		case 'S': cout << "S pressed" << endl; break;
		case 'L': cout << "L pressed" << endl; break;
		case 'Q': cout << "Q pressed" << endl; break;
	}

	return false;
}
