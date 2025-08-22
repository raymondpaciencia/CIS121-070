#include <iostream>
using namespace std;

int main()
{
	string last_name;
	int test_score;
	cout << "Enter your last name: ";
	cin >> last_name;
	cout << "Enter your test score: ";
	cin >> test_score;
	cout << last_name << " has a score of " << test_score << endl;

	return 0;
}

// IPO included

/*
Input
last_name
test_score
*/

/*
Process
Cout to tell them to enter names and score
Cin to take the names and score
Cout to display final message
*/

/*
Output
“(last name) has a score
of (test_score)”
*/