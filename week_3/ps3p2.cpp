#include <iostream>
using namespace std;

int main()
{
	double stock_price, stock_amount, portfolio_value;
	string stock_name;
	cout << "What stock do you own? ";
	cin >> stock_name;
	cout << "What is the price of " << stock_name << "? ";
	cin >> stock_price;
	cout << "How many shares of " << stock_name << " do you own? ";
	cin >> stock_amount;
	portfolio_value = stock_price * stock_amount;
	cout << "The value of your " << stock_name << " portfolio is $" << portfolio_value << endl;
	return 0;
}

