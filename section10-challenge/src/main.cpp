#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

	cout << "Enter your secret message?" << endl;
	string inputMessage {};
	std::getline(cin, inputMessage);

	cout << "\nEncrypting message..." << endl;
	string encryptedMessage {};

	for (char c : inputMessage) {
		size_t position = alphabet.find(c);
		if (position == std::string::npos) {
			encryptedMessage += c;
		} else {
			char lookupChar = key.at(position);
			encryptedMessage += lookupChar;
		}
	}

	cout << "\nEncrypted message: " << endl;
	cout << encryptedMessage << endl;
    
    cout << endl;
    return 0;
}
