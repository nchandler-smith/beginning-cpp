#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int numberIn {};
	cout << "Enter positive integer to start the countdown" << endl;
	cin >> numberIn;

	while (numberIn > 0) {
		cout << numberIn-- << endl;
	}

	cout << "Blastoff!" << endl;

	return 0;
}
