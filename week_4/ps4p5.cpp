#include <iostream>
using namespace std;

int main()
{
	int child_count;
	string last_name;
	double income, adjusted_income, tax, total;
	cout << "What is your last name? ";
	cin >> last_name;
	cout << "How many kids do you have? ";
	cin >> child_count;
	cout << "What is your gross income? ";
	cin >> income;
	adjusted_income = income - (child_count * 12000);
	if (adjusted_income > 50000)
	{
		tax = adjusted_income * 0.20;
		total = adjusted_income - tax;
		cout << "Hello " << last_name << ", your gross income is " << income << ", you have " << child_count << 
			" kids, your adjusted gross income is " << adjusted_income << " and your income tax is " << tax << 
			" which brings your total to " << total << endl;
	}
	else if (adjusted_income < 50000)
	{
		tax = adjusted_income * 0.10;
		total = adjusted_income - tax;
		cout << "Hello " << last_name << ", your gross income is " << income << ", you have " << child_count <<
			" kids, your adjusted gross income is " << adjusted_income << " and your income tax is " << tax <<
			" which brings your total to " << total << endl;
	}
	return 0;
}
