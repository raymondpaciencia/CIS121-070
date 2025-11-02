You said :
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

double compute_extended(int quantity, double price)
{
	return quantity * price;
}
double compute_tax(double sum_extended)
{
	double tax = 0.0;
	tax = sum_extended * 0.07;
	return tax;
}
double compute_receipt(double sum_extended, double tax)
{
	double total_receipt = sum_extended + tax;
	return total_receipt;
}


int main()
{
	string item;
	int quantity;
	double price;
	double extended_price;
	double sum_extended = 0.0;
	double tax, total_receipt;

	ifstream infile;
	infile.open("C:\\Users\\raymo\\OneDrive - Triton College\\CIS121-070\\week 11\\grocery.txt");

	cout << fixed << setprecision(2);

	while (infile >> item >> quantity >> price)
	{
		extended_price = compute_extended(quantity, price);

		cout << "Item: " << item << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Cost per item: $" << price << endl;
		cout << "Extended Price: $" << extended_price << endl;
		cout << "----------------------------------------" << endl;

		sum_extended += extended_price;
	}
	tax = compute_tax(sum_extended);
	total_receipt = compute_receipt(sum_extended, tax);


	cout << "----------------------------------------" << endl;
	cout << "Sum of Extended Price: $" << sum_extended << endl;
	cout << "Tax (7%):              $" << tax << endl;
	cout << "Total Receipt:         $" << total_receipt << endl;

	infile.close();

	system("pause");
	return 0;
}