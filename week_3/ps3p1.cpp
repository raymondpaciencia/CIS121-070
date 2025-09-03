#include <iostream>
using namespace std;

int main()
{
	int exam1, exam2, final;
	string name;
	cout << "what is your name? ";
	cin >> name;
	cout << "Enter your your score for exam 1: ";
	cin >> exam1;
	cout << "Enter your your score for exam 2: ";
	cin >> exam2;
	cout << name << ", your average score is " << (exam1 * 0.6) + (exam2 * 0.4) << ", just a reminder that 60% of the final score is from your exam 1 and the other 40% is from youre exam 2" << endl;
	return 0;
}