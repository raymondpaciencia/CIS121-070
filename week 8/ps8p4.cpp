#include <iostream>
using namespace std;

double compute_unit_price(char product_code, int quantity)
{
    double unit_price;

    if (product_code == 'W' || product_code == 'w')
        return 10.00;
    else if (product_code == 'C' || product_code == 'c')
        return 15.00;
    else if (product_code == 'G' || product_code == 'g')
        return 20.00;
    else
        return 0.0;

}

double compute_shipping(char product_code)
{
    if (product_code == 'W' || product_code == 'w')
        return 2.00;
    else if (product_code == 'C' || product_code == 'c')
        return 5.00;
    else if (product_code == 'G' || product_code == 'g')
        return 7.00;
    else
        return 0.00;
}

int main()
{
    char product_code;
    int quantity;
    int sum_of_entries = 0;
    double extended_price, shipping, unit_price;

    cout << "Enter product code (W, C, G): ";
    while (cin >> product_code)
    {
        cout << "Enter quantity: ";
        cin >> quantity;

        unit_price = compute_unit_price(product_code, quantity);
        shipping = compute_shipping(product_code);

        extended_price = unit_price * quantity + shipping;
    
        cout << "Product code: " << product_code << endl;
        cout << "Unit price: " << unit_price << endl;
        cout << "Shipping: " << shipping << endl;
        cout << "Extended price: " << extended_price << endl;
        cout << "_____________________________________________________________________________" << endl;
        cout << "Enter product code (W, C, G): ";

        sum_of_entries++;
    }

    cout << "Sum of the entries made: " << sum_of_entries << endl;

    return 0;
}
