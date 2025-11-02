#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

double compute_biweekly(double annual_salary)
{
	return annual_salary / 26;
}

int main()
{
	string lname;
	double annual_salary;
	double biweekly_salary;
	double total_annual = 0.0;
	int count = 0;
	double average_salary;

	ifstream infile;
	infile.open("C:\\Users\\raymo\\OneDrive - Triton College\\CIS121-070\\week 11\\empl.txt");

	cout << fixed << setprecision(2);

	while (infile >> lname >> annual_salary)
	{
		biweekly_salary = compute_biweekly(annual_salary);

		cout << "Last Name: " << lname << endl;
		cout << "Annual Salary: $" << annual_salary << endl;
		cout << "Bi-weekly Salary: $" << biweekly_salary << endl;
		cout << "----------------------------------------" << endl;

		total_annual += annual_salary;
		count++;
	}

	average_salary = total_annual / count;

	cout << "----------------------------------------" << endl;
	cout << "Total Annual Salary: $" << total_annual << endl;
	cout << "Number of Employees: " << count << endl;
	cout << "Average Annual Salary: $" << average_salary << endl;

	infile.close();

	system("pause");
	return 0;
}
