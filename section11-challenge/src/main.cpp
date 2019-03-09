#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

void displayMenu();
char processEntry();
void performAction(char action, vector<int> &numberList);
void printNumberList(const vector<int> &numberList);

int main() {
	char action {};
	vector <int> numberList {};

	do{
		displayMenu();
		action = processEntry();
		performAction(action, numberList);
	} while (action != 'Q');
	
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

void performAction(char action, vector<int> &numberList) {
	switch(action) {
		case 'P': printNumberList(numberList); break;
		case 'A': cout << "A pressed" << endl; break;
		case 'M': cout << "M pressed" << endl; break;
		case 'S': cout << "S pressed" << endl; break;
		case 'L': cout << "L pressed" << endl; break;
		case 'Q': cout << "Q pressed" << endl; break;
		default: cout << "Illegal action. Please try again." << endl;
	}
}

void printNumberList(const vector<int> &numberList) {
	cout << "[ ";
	for(int number: numberList)
		cout << number << " ";
	cout << "]" << endl;
}
