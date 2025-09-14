#include <iostream>
using namespace std;

int main() 
{
	double salary, taxRate, taxAmount;
	cout << "What is your salary? ";
	cin >> salary;
	if (salary > 100000)
	{
		taxRate = 0.40;
		taxAmount = salary * taxRate;
		cout << "Your salary is: " << salary << ", your tax rate is: " << taxRate * 100 << "%, and your tax amount is: " << taxAmount << endl;
	}
	else if (salary >= 50000)
	{
		taxRate = 0.35;
		taxAmount = salary * taxRate;
		cout << "Your salary is: " << salary << ", your tax rate is: " << taxRate * 100 << "%, and your tax amount is: " << taxAmount << endl;
	}
	else
	{
		taxRate = 0.25;
		taxAmount = salary * taxRate;
		cout << "Your salary is: " << salary << ", your tax rate is: " << taxRate * 100 << "%, and your tax amount is: " << taxAmount << endl;
	}
	cout << "Thank you for using the tax calculator!" << endl;
	return 0;
}

