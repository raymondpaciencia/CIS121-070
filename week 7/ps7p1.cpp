#include <iostream>
using namespace std;

int main() {
    int quantity, price;
    double extended_price, discount_percent, discount_amount, discounted_price;
    double total = 0;

    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter price: ";
    cin >> price;

    while (!cin.eof()) {
        if (quantity >= 1000)
            discount_percent = 0.10;
        else
            discount_percent = 0.0;

        extended_price = quantity * price;
        discount_amount = extended_price * discount_percent;
        discounted_price = extended_price - discount_amount;

        cout << "Quantity: " << quantity << endl;
        cout << "Price: " << price << endl;
        cout << "Extended Price: " << extended_price << endl;
        cout << "Discount Amount: " << discount_amount << endl;
        cout << "Discounted Price: " << discounted_price << endl;

        total = total + discounted_price;

        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter price: ";
        cin >> price;
    }

    cout << "TOTAL of all discounted prices: " << total << endl;

    return 0;
}
