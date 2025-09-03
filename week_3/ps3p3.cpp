#include <iostream>
using namespace std;

int main()
{
	string name;
	double check, tip_percent, tip_amount, total;
	cout << "What is your name? ";
	cin >> name;
	cout << "How much is you bill? ";
	cin >> check;
	cout << "How much do you want to tip the server? ";
	cin >> tip_percent;
	tip_amount = check * (tip_percent / 100);
	total = check + tip_amount;
	cout << "Hello " << name << "," << " Your bill is $" << check << ", your tip is $" << tip_amount << ", and your total is $" << total << endl;
	return 0;
}