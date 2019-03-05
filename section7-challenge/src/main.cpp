#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {

	vector <int> vector1;
	
	vector1.push_back(10);
	vector1.push_back(20);
	cout << "vector 1 first element: " << vector1.at(0) << endl;
	cout << "vector 1 second element: " << vector1.at(1) << endl;
	cout << endl;

	vector <int> vector2;
	vector2.push_back(100);
	vector2.push_back(200);
	cout << "vector 2 first element: " << vector2.at(0) << endl;
	cout << "vector 2 second element: " << vector2.at(1) << endl;
	cout << endl;

	vector <vector <int>> vector2D;
	vector2D.push_back(vector1);
	vector2D.push_back(vector2);
	cout << "vector2D row 0 column 0: " << vector2D.at(0).at(0) << endl;
	cout << "vector2D row 0 column 1: " << vector2D.at(0).at(1) << endl;
	cout << "vector2D row 1 column 0: " << vector2D.at(1).at(0) << endl;
	cout << "vector2D row 1 column 1: " << vector2D.at(1).at(1) << endl;
	cout << endl;

	vector1.at(0) = 1000;
	cout << "vector2D row 0 column 0: " << vector2D.at(0).at(0) << endl;
	cout << "vector2D row 0 column 1: " << vector2D.at(0).at(1) << endl;
	cout << "vector2D row 1 column 0: " << vector2D.at(1).at(0) << endl;
	cout << "vector2D row 1 column 1: " << vector2D.at(1).at(1) << endl;
	cout << endl;

	cout << "vector 1 first element: " << vector1.at(0) << endl;
	cout << "vector 1 second element: " << vector1.at(1) << endl;
	cout << endl;

	return 0;
} 
 