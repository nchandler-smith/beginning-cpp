#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void displayMenu();
char getActionFromUser();
void printNumbers(vector<int> *numbers_ptr);
void takeAction(char action, vector<int> *numbers_ptr);
void addNumber(vector<int> *numbers_ptr);
void printMean(vector<int> *numbers_ptr);
void printSmallest(vector<int> *numbers_ptr);
void printLargest(vector<int> *numbers_ptr);

int main() {

	cout << "\n ---------- Start Integer list Processor ----------" << endl;
	cout << "\nHello, please select from the following options:" << endl;
	
	bool done;
	vector <int> numbers {};
	
	do {
		char action;

		displayMenu();
		action = getActionFromUser();
		takeAction(action, &numbers);
		(action == 'Q') ? done=1 : done=0;
	} while (!done);
	
	cout << "\n ---------- End Integer list Processor ----------" << endl;

	return 0;
}

void displayMenu() {
	cout <<"\n";
	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "Q - Quit \n" << endl;
}

char getActionFromUser() {
	cout << "\nPlease enter your choice: ";
	char action {};
	cin >> action;
	return std::toupper(action);
}

void takeAction(char action, vector<int> *numbers_ptr) {
	switch (action)
	{
		case 'P': printNumbers(numbers_ptr); break;
		case 'A': addNumber(numbers_ptr); break;
		case 'M': printMean(numbers_ptr); break;
		case 'S': printSmallest(numbers_ptr); break;
		case 'L': printLargest(numbers_ptr); break;
		default: cout << "\nIllegal entry: " << action << "\nTry again."<< endl; break;
	}
}

void printNumbers(vector<int> *numbers_ptr) {
	cout << "[ ";
	for (int number : *numbers_ptr)
		cout << number << " ";
	cout << "]" << endl;
}

void addNumber(vector<int> *numbers_ptr) {
	cout << "Enter integer to add to the list: ";
	int inputNumber {};
	cin >> inputNumber;
	numbers_ptr->push_back(inputNumber);
	cout << "\n" << inputNumber <<" added." << endl;
}

void printMean(vector<int> *numbers_ptr) {

	if (numbers_ptr->size() == 0) {
		cout << "No data. Unable to calculate mean." << endl;
		return;
	}

	double mean {};
	double sum {};

	for (int number : *numbers_ptr)
		sum += number;
	mean = sum / numbers_ptr->size();
	cout << "The mean is " << mean << "." << endl;
}

void printSmallest(vector<int> *numbers_ptr) {
	int smallest = std::numeric_limits<int>::max();
	for (int number : *numbers_ptr)
		if (number < smallest)
			smallest = number;
	cout << "The smallest number is " << smallest << "." << endl;
}

void printLargest(vector<int> *numbers_ptr) {
	int largest = std::numeric_limits<int>::min();
	for (int number : *numbers_ptr)
		if (number > largest)
			largest = number;
	cout << "The largest number is " << largest << "." << endl;
}
