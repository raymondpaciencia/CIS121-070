#include <iostream>
using namespace std;

int main()
{
	double price_tag, tax, extended_price, total, quantity;
	char status;
		cout << "Enter a number of widgets: ";
	cin >> quantity;
	cout << "Enter customer status (A, B, C, D): ";
	cin >> status;

	if (quantity > 10000 && status == 'A')
	{
		price_tag = 10;
		extended_price = quantity * price_tag;
		tax = extended_price * 0.07;
		total = extended_price + tax;
		cout << "Your extended price is: " << extended_price << ", your tax is: %0.07, meaning your tax is: " << tax <<
			" and your total comes to: " << total << endl;
	}
	else if (quantity > 10000 && status == 'B')
	{
		price_tag = 12;
		extended_price = quantity * price_tag;
		tax = extended_price * 0.07;
		total = extended_price + tax;
		cout << "Your extended price is: " << extended_price << ", your tax is: %0.07, meaning your tax is: " << tax <<
			" and your total comes to: " << total << endl;
	}
	else if (quantity >= 5000 && quantity <= 10000 && status == 'C')
	{
		price_tag = 20;
		extended_price = quantity * price_tag;
		tax = extended_price * 0.07;
		total = extended_price + tax;
		cout << "Your extended price is: " << extended_price << ", your tax is: %0.07, meaning your tax is: " << tax <<
			" and your total comes to: " << total << endl;
	}
	else if (quantity >= 5000 && quantity <= 10000 && status == 'D')
	{
		price_tag = 22;
		extended_price = quantity * price_tag;
		tax = extended_price * 0.07;
		total = extended_price + tax;
		cout << "Your extended price is: " << extended_price << ", your tax is: %0.07, meaning your tax is: " << tax <<
			" and your total comes to: " << total << endl;
	}
	else
	{
		price_tag = 30;
		extended_price = quantity * price_tag;
		tax = extended_price * 0.07;
		total = extended_price + tax;
		cout << "Your extended price is: " << extended_price << ", your tax is: %0.07, meaning your tax is: " << tax <<
			" and your total comes to: " << total << endl;
	}
}
