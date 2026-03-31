#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char equipCode;
    char dayCode;
    double cost;

    cout << "Enter equipment code (A, B, C): ";
    cin >> equipCode;
    cout << "Enter day code (F = Full day, H = Half day): ";
    cin >> dayCode;

    if (equipCode == 'A' && dayCode == 'F') {
        cost = 10.00;
    }
    else if (equipCode == 'A' && dayCode == 'H') {
        cost = 15.00;
    }
    else if (equipCode == 'B' && dayCode == 'F') {
        cost = 20.00;
    }
    else if (equipCode == 'B' && dayCode == 'H') {
        cost = 35.00;
    }
    else if (equipCode == 'C' && dayCode == 'H') {
        cost = 40.00;
    }
    else if (equipCode == 'C' && dayCode == 'F') {
        cost = 45.00;
    }
    else {
        cost = 50.00;  
    }
    
    cout << "\nEquipment Code: " << equipCode << endl;
    cout << "Day Code: " << dayCode << endl;
    cout << "Rental Cost: $" << cost << endl;

    return 0;
}