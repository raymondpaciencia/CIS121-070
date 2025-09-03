#include <iostream>
using namespace std;

int main()
{
    double Set_up_cost, Price_to_sell_it, Price_to_make_it, break_even;

    cout << "Enter initial set up cost: ";
    cin >> Set_up_cost;

    cout << "Enter price of your product: ";
    cin >> Price_to_sell_it;

    cout << "Enter how much it cost to make one of youre products: ";
    cin >> Price_to_make_it;

    break_even = Set_up_cost / (Price_to_sell_it - Price_to_make_it);

    cout << "You need to sell " << break_even << " units to break even." << endl;

    return 0;
}
