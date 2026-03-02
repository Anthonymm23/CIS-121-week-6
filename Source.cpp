#include <iostream>
using namespace std;

int main() {
    char job;
    double hours, rate, gross;

    cout << "Enter job code (L, J, A): ";
    cin >> job;

    cout << "Enter hours worked: ";
    cin >> hours;

    if (job == 'L' || job == 'l') {
        if (hours > 40)
            rate = 50.00;
        else
            rate = 40.00;
    }
    else if (job == 'J' || job == 'j') {
        if (hours > 60)
            rate = 100.00;
        else
            rate = 75.00;
    }
    else if (job == 'A' || job == 'a') {
        if (hours > 40)
            rate = 25.00;
        else
            rate = 20.00;
    }
    else {
        cout << "Invalid job code.";
        return 0;
    }

    gross = hours * rate;

    cout << "Gross Pay: $" << gross << endl;

    return 0;
}
