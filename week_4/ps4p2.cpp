#include <iostream>
using namespace std;

int main()
{
    int quantity;
    double unit_price, total;
    char item;

    cout << "Which item would you like? A or B: ";
    cin >> item;

    if (item == 'A' || item == 'a') {
        cout << "How many would you like? ";
        cin >> quantity;
        unit_price = 10.00;
        total = quantity * unit_price;
        cout << "You chose item A. The unit price is $" << unit_price << " and your total is $" << total << endl;
    }
    else if (item == 'B' || item == 'b') {
        cout << "How many would you like? ";
        cin >> quantity;
        unit_price = 20.00;
        total = quantity * unit_price;
        cout << "You chose item B. The unit price is $" << unit_price << " and your total is $" << total << endl;
    }
    else {
        cout << "Invalid item choice. Please choose A or B." << endl;
    }

    return 0;
}
