#include <iostream>
using namespace std;

int main()
{
	double weight, rate, total;
	cout << "How many pounds of metal are you bringing in? ";
	cin >> weight;
	if (weight > 100)
	{
		rate = 0.50;
		total = weight * rate;
		cout << "The weight is: " << weight << ", the rate per pound is: " << rate << ", and the total given to the customer is: " << total << endl;
	}
	else if (weight >= 30)
	{
		rate = 0.25;
		total = weight * rate;
		cout << "The weight is: " << weight << ", the rate per pound is: " << rate << ", and the total given to the customer is: " << total << endl;
	}
	else if (weight >= 20)
	{
		rate = 0.20;
		total = weight * rate;
		cout << "The weight is: " << weight << ", the rate per pound is: " << rate << ", and the total given to the customer is: " << total << endl;
	}
	else
	{
		rate = 0.10;
		total = weight * rate;
		cout << "The weight is: " << weight << ", the rate per pound is: " << rate << ", and the total given to the customer is: " << total << endl;
	}
	cout << "Thank you for recycling!" << endl;
	return 0;
}

