#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {

	const int dollarValue = 100;
	const int quarterValue = 25;
	const int dimeValue = 10;
	const int nickelValue = 5;

	cout << "Please enter an integer representing the number of cents: ";
	int startingValue {0};
	cin >> startingValue;
	cout << endl;

	cout << "You can provide the change as follows" << endl;

	cout << "dollars: ";
	int change = startingValue / dollarValue;
	int leftover = startingValue % dollarValue;
	cout << change << endl;

	cout << "quarters: ";
	change = leftover / quarterValue;
	leftover %= quarterValue;
	cout << change << endl;
	
	cout << "dimes: ";
	change = leftover / dimeValue;
	leftover %= dimeValue;
	cout << change << endl;

	cout << "nickels: ";
	change = leftover / nickelValue;
	leftover %= nickelValue;
	cout << change << endl;

	cout << "pennies: ";
	cout << leftover << endl;

	return 0;
}
