#include <iostream>
using namespace std;

int main()
{	
	string lastname;
	int hours, payperhour, grossing;

	cout << "What is your last name? ";
	cin >> lastname;
	cout << "How many hours do you work per year? ";
	cin >> hours;
	cout << "What is your pay per hour? ";
	cin >> payperhour;

	grossing = hours * payperhour;

	cout << "You have a grossing of " << grossing << endl;

	return 0;
}