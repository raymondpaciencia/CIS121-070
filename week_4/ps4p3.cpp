#include <iostream>
using namespace std;

int main()
{
	double cost_per_book, num_of_book, total, shipping;
	cout << "Enter the number of books to order: ";
	cin >> num_of_book;
	cout << "Enter the cost per book: ";
	cin >> cost_per_book;
	total = num_of_book * cost_per_book;
	if (total > 50.00) 
	{
		shipping = 0.00;
		cout << "Your total is " << total << " and your shipping cost is " << shipping << endl;
	}
	else 
	{
		shipping = 25.00;
		cout << "Your total is " << total << " and your shipping cost is " << shipping << endl;
	}
	return 0;
}
