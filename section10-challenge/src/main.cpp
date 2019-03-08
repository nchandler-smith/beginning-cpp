#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

string translateMessage(string message, string publicList, string privateList);

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

	cout << "Enter your secret message?" << endl;
	string inputMessage {};
	std::getline(cin, inputMessage);

	cout << "\nEncrypting message..." << endl;
	string encryptedMessage {translateMessage(inputMessage, alphabet, key)};

	cout << "\nEncrypted message: " << endl;
	cout << encryptedMessage << endl;

	cout << "\nDecrypting message..." << endl;
	string decryptedMessage {translateMessage(encryptedMessage, key, alphabet)};
    
	cout << "\nDecrypted message: " << endl;
	cout << decryptedMessage;

    cout << endl;
    return 0;
}

string translateMessage(string message, string publicList, string privateList) {
	string translatedMessage {};
	for (char c : message) {
		size_t position = publicList.find(c);
		if (position == std::string::npos) { // if character not found in publicList
			translatedMessage += c;
		} else {
			char lookupChar = privateList.at(position);
			translatedMessage += lookupChar;
		}
	}
	return translatedMessage;
}
