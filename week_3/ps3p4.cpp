#include <iostream>
using namespace std;

int main()
{
    double purchase_price, current_price, change, percent_change;

    cout << "What is the price of your stock? ";
    cin >> purchase_price;

    cout << "Enter the current price of that same stock: ";
    cin >> current_price;

    change = current_price - purchase_price;
    percent_change = (change / purchase_price) * 100;

    if (percent_change > 0)
    {
        cout << "The stock increased by " << percent_change << "%" << endl;
    }
    else if (percent_change < 0)
    {
        cout << "The stock decreased by " << -percent_change << "%" << endl;
    }

    return 0;
}
