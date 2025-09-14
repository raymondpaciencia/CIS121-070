#include <iostream>
using namespace std;

int main()
{
	double pounds, pricePerPound, totalPrice;
	cout << "How many pounds of apples are you buying? ";
	cin >> pounds;
	if (pounds > 100)
	{
		pricePerPound = 0.10;
		totalPrice = pounds * pricePerPound;

		cout << "The price per pound is: " << pricePerPound << " and your total is: " << totalPrice << endl;
	}
	else if (pounds >= 50)
	{
		pricePerPound = 0.25;
		totalPrice = pounds * pricePerPound;

		cout << "The price per pound is: " << pricePerPound << " and your total is: " << totalPrice << endl;
	}
	else
	{
		pricePerPound = 0.50;
		totalPrice = pounds * pricePerPound;

		cout << "The price per pound is: " << pricePerPound << " and your total is: " << totalPrice << endl;
	}
	cout << "Thank you for shopping!" << endl;
	return 0;
}




