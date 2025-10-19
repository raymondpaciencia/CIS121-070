#include <iostream>
using namespace std;

void compute_order(double quantity, double price, double total, double tax, double total_order)
{
    total = quantity * price;
    tax = total * 0.07;
    total_order = total + tax;
}

int main()
{
    double quantity, price, total, tax, total_order;
    double sum_total = 0.0;
    double sum_tax = 0.0;

    cout << "Enter quantity (Ctrl+Z to stop): ";

    while (cin >> quantity)
    {
        cout << "Enter price: ";
        cin >> price;

        compute_order(quantity, price, total, tax, total_order);

        cout << "Total: " << total << endl;
        cout << "Tax: " << tax << endl;
        cout << "Total Order: " << total_order << endl;
        cout << "________________________________________" << endl;

        sum_total += total;
        sum_tax += tax;

        cout << "Enter quantity (Ctrl+Z to stop): ";
    }

    cout << endl;
    cout << "Sum of all totals: " << sum_total << endl;
    cout << "Sum of all tax: " << sum_tax << endl;

    return 0;
}
