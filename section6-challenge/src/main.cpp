#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	cout << "*******************************" << endl;
	cout << "Frank's Carpet Cleaning Service" << endl;
	
	cout << "\nCharges and stipulations: " << endl;
	const double smallRoomCharge {25.0};
	const double largeRoomCharge {35.0};
	const double tax_rate {0.06};
	const int estimate_experiation {30}; //days
	cout << "	$" << smallRoomCharge << " per small room." << endl;
	cout << "	$" << largeRoomCharge << " per large room." << endl;
	cout << "	Sales tax rate: " << tax_rate * 100 << "\%." << endl;
	cout << "	Estimates are valid for " << estimate_experiation << " days." << endl;

	cout << "\nHow many small rooms? " << endl;
	int numberSmallRooms {0};
	cin >> numberSmallRooms;
	cout << "How many large rooms? " << endl;
	int numberLargeRooms {0};
	cin >> numberLargeRooms;

	cout << "\nEstimate for carpet cleaning service";

	cout << "\n*******************************" << endl;

	return 0;
}
