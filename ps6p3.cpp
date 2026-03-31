#include <iostream>
using namespace std;
int main()
{
	int tickets;
	char location;
	double price;

	cout << "Enter number of tickets: ";
	cin >> tickets;
	cout << "Enter location (H or L): ";
	cin >> location;

	if (tickets > 25 || location == 'H') {
		price = 30.00;
	}
	else if (tickets > 10 || location == 'L') {
		price = 40.00;
	}
	else {
		price = 50.00;
	}

	double total = price * tickets;

	cout << "Tickets: " << tickets << endl;
	cout << "Price per ticket: $" << price << endl;
	cout << "Total cost: $" << total << endl;

	return 0;
}