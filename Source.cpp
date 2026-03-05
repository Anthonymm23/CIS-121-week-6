#include <iostream>
using namespace std;
int main()
{
	int quantity;
	char status;
	double price, extended, tax, total;

	cout << "Enter quantity: ";
	cin >> quantity;
	cout << "Enter status (A, B, C, D): ";
	cin >> status;

	if (quantity > 10000) {
		if (status == 'A' || status == 'a')
				price = 10;
			else if (status == 'B' || status == 'b')
				price = 12;
			else 
				price = 30;
			}
	else if (quantity >= 5000) {
		if (status == 'C' || status == 'c')
			price = 20;
		else if (status == 'D' || status == 'd')
			price = 22;
		else 
			price = 30;
			}
	else {
		price = 30;
	}

	extended = quantity * price;
	tax = extended * 0.07;
	total = extended + tax;

	cout << "Unit Price: $" << price << endl;
	cout << "Extended Price: $" << extended << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total: $" << total << endl;

	return 0;
	}