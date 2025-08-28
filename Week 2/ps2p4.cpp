#include <iostream>
using namespace std;

int main()
{
	string lastname;
	double credit, tuition;
	cout << "Whats your last name? ";
	cin >> lastname;
	cout << "And how many credits do you have now? ";
	cin >> credit;
	tuition = (credit * 250) + 100;
	cout << "Hey " << lastname << ", your tuition at triton is " << tuition << endl;

	return 0;
}
