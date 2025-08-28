#include <iostream>
using namespace std;

int main()
{
	double price_of_item, discount_percent, discounted_price, money_saved;
	cout << "What is the price of the item? ";
	cin >> price_of_item;
	cout << "What is the discount percent (as a decimal)? ";
	cin >> discount_percent;
	discounted_price = price_of_item - (price_of_item * discount_percent);
	money_saved = price_of_item * discount_percent;
	cout << "The discounted price is " << discounted_price << endl;
	cout << "You saved " << money_saved << endl;
	return 0;
}
