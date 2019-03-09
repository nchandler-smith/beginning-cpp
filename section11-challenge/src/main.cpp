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
void addNumber(vector<int> &numberList);
void displayMean(const vector<int> &numberList);

int main() {
	char action {};
	vector <int> numberList {};

	do {
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
		case 'A': addNumber(numberList); break;
		case 'M': displayMean(numberList); break;
		case 'S': cout << "S pressed" << endl; break;
		case 'L': cout << "L pressed" << endl; break;
		case 'Q': cout << "Q pressed" << endl; break;
		default: cout << "Illegal action. Please try again." << endl;
	}
}

void printNumberList(const vector<int> &numberList) {
	cout << "[ ";
	for (int number: numberList)
		cout << number << " ";
	cout << "]" << endl;
}

void addNumber(vector<int> &numberList) {
	int newNumber {};

	cout << "Enter integer to add to list: ";
	cin >> newNumber;
	numberList.push_back(newNumber);
	cout << newNumber << " added to list. " << endl;
}

void displayMean(const vector<int> &numberList) {
	if (numberList.size() == 0) {
		cout << "List is empty. Mean value is not defined." << endl;
		return;
	}

	double sum {};
	for (int number: numberList) {
		sum += number;
	}
	cout << "Mean value of the list: " << sum/numberList.size() << endl;
}

