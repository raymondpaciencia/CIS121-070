#include <iostream>
using namespace std;

int main()
{
	double item_quantity, extended_price, tax, total;
	cout << "How much do you want to buy of this item? ";
	cin >> item_quantity;
	//process
	if (item_quantity >= 1000)
	{
		extended_price =item_quantity * 3;
	}
	else if (item_quantity <= 1000)
	{
		extended_price = item_quantity * 5;
	}
	tax = extended_price * 0.07;
	total = extended_price + tax; 
	cout << "Your extended price is " << extended_price << " and your total including tax is " << total << endl;
	return 0;
}
