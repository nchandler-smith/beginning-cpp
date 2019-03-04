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

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << numberSmallRooms << endl;
	cout << "Number of large rooms: " << numberLargeRooms << endl;
	cout << "Price per small room: $" << smallRoomCharge << endl;
	cout << "Price per large room: $" << largeRoomCharge  << endl;
	
	cout << "Cost: $";
	double smallRoomCost = smallRoomCharge * numberSmallRooms;
	double largeRoomCost = largeRoomCharge * numberLargeRooms;
	double cost = smallRoomCost + largeRoomCost;
	cout << cost << endl;
	
	cout << "Tax: $";
	double tax = tax_rate * cost;
	cout << tax << endl;
	
	cout << "=================================" << endl;

	cout << "Total estimate: $";
	double totalEstimate = cost + tax;
	cout << totalEstimate << endl;
	
	cout << "This estimate is valid for " << estimate_experiation << " days." << endl;

	cout << "\n*******************************" << endl;

	return 0;
}
