#include <iostream>
#include <string>

using namespace std;

void print(const int array_in[], size_t array_size) {
	cout << "[ ";
	for(size_t i {}; i < array_size; i++) {
		cout << (*array_in++) << " ";
	}
	cout << "]" << endl;
}

int *apply_all(int array1_in[], size_t array1_size, 
			   int array2_in[], size_t array2_size) {
				   return {};
			   }

string pretty_print(const int array_in[], size_t array_size) {
    string return_string {"[ "};
    for(size_t i{}; i <array_size; i++) {
        return_string += std::to_string(*(array_in++)) + " ";
    }
    return_string += "]";
  return return_string;
}