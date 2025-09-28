#include <iostream>
using namespace std;

int main() {
    char equipment_code, day_code;
    double cost;

    cout << "What is your rental equipment code? letter must be capped:  ";
    cin >> equipment_code;
    cout << "What is your day code? letter must be capped: ";
    cin >> day_code;

    if (equipment_code == 'A' && day_code == 'F')
    {
        cost = 10.00;
    }
    else if (equipment_code == 'A' && day_code == 'H')
    {
        cost = 15.00;
    }
    else if (equipment_code == 'B' && day_code == 'F')
    {
        cost = 20.00;
    }
    else if (equipment_code == 'B' && day_code == 'H')
    {
        cost = 35.00;
    }
    else if (equipment_code == 'C' && day_code == 'H')
    {
        cost = 40.00;
    }
    else if (equipment_code == 'C' && day_code == 'F')
    {
        cost = 45.00;
    }
    else
    {
        cost = 50.00;
    }

    cout << "Your rental cost is: " << cost << endl;
    return 0;
}

