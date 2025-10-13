#include <iostream>
using namespace std;

double compute_total(double quantity, double price)
{
    return quantity * price;
}

double compute_discount(double total)
{
    double discount;
    if (total > 10000)
        discount = total * 0.10;
    else
        discount = total * 0.05;
    return discount;
}

int main()
{
    double quantity, price, total, discount, discounted_price;
    double sum_total = 0.0;
    double sum_discount = 0.0;

    cout << "Enter quantity (Ctrl+Z to stop): ";

    while (cin >> quantity)
    {
        cout << "Enter price: ";
        cin >> price;

        total = compute_total(quantity, price);
        discount = compute_discount(total);
        discounted_price = total - discount;

        cout << "Your total is: " << total << endl;
        cout << "Your discount total is: " << discount << endl;
        cout << "Your final price is: " << discounted_price << endl;
        cout << "_________________________________________________" << endl;

        sum_total = sum_total + total;
        sum_discount = sum_discount + discount;

        cout << "Enter quantity (Ctrl+Z to stop): ";
    }

    cout << "Sum of all the totals: " << sum_total << endl;
    cout << "Sum of all the discounts: " << sum_discount << endl;

    return 0;
}
