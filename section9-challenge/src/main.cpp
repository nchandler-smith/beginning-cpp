#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

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
	cout << "Please enter your choice: ";
	char action {};
	cin >> action;
	return action;
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

void takeAction(char action, vector<int> numbers) {
	switch (action)
	{
		case 'P': printNumbers(numbers); break;
		default:
			break;
	}
}

int main() {

	cout << "\n ---------- Start Integer list Processor ----------" << endl;
	cout << "\nHello, please select from the following options:" << endl;
	
	bool done;
	
	do {
		char action;
		vector <int> numbers {};

		displayMenu();
		action = std::toupper(getActionFromUser());
		takeAction(action, numbers);
		(action == 'Q') ? done=1 : done=0;
	} while (!done);
	
	cout << "\n ---------- End Integer list Processor ----------" << endl;

	return 0;
}
