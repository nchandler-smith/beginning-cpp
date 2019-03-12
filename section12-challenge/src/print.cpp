#include <iostream>
#include <string>
#include "print.h"

using namespace std;

void print(const int array_in[], size_t array_size) {
	cout << pretty_print(array_in, array_size) << endl;
}

int *apply_all(int array1_in[], size_t array1_size, 
			   int array2_in[], size_t array2_size) {
                   static int result[1] {0};
				   return result;
			   }

string pretty_print(const int array_in[], size_t array_size) {
    string return_string {"[ "};
    for(size_t i{}; i <array_size; i++) {
        return_string += std::to_string((array_in[i])) + " ";
    }
    return_string += "]";
  return return_string;
}