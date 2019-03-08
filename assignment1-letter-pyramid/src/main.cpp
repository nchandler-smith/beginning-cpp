#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;

string buildTier(string partialTier);
string padTier(int baseSize, int tierNumber);

int main() {
	string startingString {};
	cout << "Enter the string that will be used to build the pyramid." << endl;
	std::getline(std::cin, startingString);
	cout << endl;
	
	int baseSize = startingString.length();
	string tier {};
	string padding {};
	for(unsigned i {}; i <= startingString.length(); i++) {
		tier = buildTier(startingString.substr(0, i));
		padding = padTier(baseSize,i);
		cout << padding << tier << padding << endl;
	}
	return 0;
}

string buildTier(string partialTier) {
	string clipped {partialTier.substr(0, partialTier.length()-1)};
	std::reverse(clipped.begin(), clipped.end());
	string tier {partialTier + clipped};
	return tier;
}

string padTier(int baseSize, int tierNumber) {
	int padAmount {baseSize-tierNumber};
	string padding(padAmount, ' ');
	return padding;
}
