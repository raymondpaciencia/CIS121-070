#include <iostream>
using namespace std;

int main()
{
	string lastName;
	int hoursWorked;
	char jobCode;
	double payRate, total;
	cout << "What is your employee last name: ";
	cin >> lastName;
	cout << "How many hours did you work? ";
	cin >> hoursWorked;
	cout << "Enter your job code (E, J, A): ";
	cin >> jobCode;
	if (jobCode == 'E')
	{
		payRate = 25.00;
		total = hoursWorked * payRate;
		cout << "Employee: " << lastName << ", Hours Worked: " << hoursWorked << ", Pay Rate: " << payRate << ", Total Pay: " << total << endl;
	}
		
	else if (jobCode == 'J')
	{
		payRate = 20.00;
		total = hoursWorked * payRate;
		cout << "Employee: " << lastName << ", Hours Worked: " << hoursWorked << ", Pay Rate: " << payRate << ", Total Pay: " << total << endl;
	}
	else if (jobCode == 'A')
	{
		payRate = 15.00;
		total = hoursWorked * payRate;
		cout << "Employee: " << lastName << ", Hours Worked: " << hoursWorked << ", Pay Rate: " << payRate << ", Total Pay: " << total << endl;
	}
	else
	{
		cout << "Invalid job code entered... Enter a valid code next time." << endl;
	}
	return 0;
}

