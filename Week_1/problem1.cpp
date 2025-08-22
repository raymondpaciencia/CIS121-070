#include <iostream>
using namespace std;

int main()
{
	string first_name, last_name;
	cout << "Enter your first name: ";
	cin >> first_name;
	cout << "Enter your last name: ";
	cin >> last_name;
	cout << "Hello, " << first_name << " " << last_name << endl;

	return 0;
}
// IPO included 

/*
Input
first_name
last_name
*/

/*
Process
First we have to specify that these things are strings
We will use cout to tell them “enter you’re first and last”
Then cin << string to take in theyre answers
And then do another cout to say “hello first_name last_name.”
*/

/*
Output
Hello Ray Mon.
*/