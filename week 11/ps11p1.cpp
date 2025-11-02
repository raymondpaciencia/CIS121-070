#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

void compute(double msrp, double& salesPrice, double& salesTax, double& savings)
{
	savings = msrp - salesPrice;
	salesTax = salesPrice * 0.07;
}

int main()
{
	string make, model;
	double msrp, salesPrice;
	double savings, salesTax;
	double totalSavings = 0.0;

	ifstream infile;
	infile.open("C:\\Users\\raymo\\OneDrive - Triton College\\CIS121-070\\week 11\\auto.txt");

	
}

while (infile >> make >> model >> msrp >> salesPrice)
	{
		compute(msrp, salesPrice, salesTax, savings);

		cout << fixed << setprecision(2);
		cout << "Make: " << make << "   Model: " << model << endl;
		cout << "MSRP: $" << msrp << "   Sales Price: $" << salesPrice << endl;
		cout << "Savings: $" << savings << "   Sales Tax: $" << salesTax << endl;
		cout << "----------------------------------------" << endl;

		totalSavings += savings;
}

	cout << endl;
	cout << "Total Savings: $" << totalSavings << endl;

	infile.close();

	system("pause");
	return 0;
}
