#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void displayMenu();
char getActionFromUser();
void printNumbers(vector<int> numbers);
void takeAction(char action, vector<int> numbers);

int main() {

	cout << "\n ---------- Start Integer list Processor ----------" << endl;
	cout << "\nHello, please select from the following options:" << endl;
	
	bool done;
	
	do {
		char action;
		vector <int> numbers {};

		displayMenu();
		action = getActionFromUser();
		takeAction(action, numbers);
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

void takeAction(char action, vector<int> numbers) {
	switch (action)
	{
		case 'P': printNumbers(numbers); break;
		// case 'A': addNumber(&numbers); break;
		default:
			break;
	}
}

void printNumbers(vector<int> numbers) {
	if (numbers.size() > 0) {
		cout << "[ ";
		for (int number : numbers)
			cout << number << " ";
		cout << " ]" << endl;
	} else {
		cout << "No numbers entered." << endl;
	}
}
