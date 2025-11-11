#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

void readData(string firstName[], string lastName[], double gpa[], ifstream& infile)
{
	for (int i = 0; i < 10; i++)
	{
		infile >> firstName[i] >> lastName[i] >> gpa[i];
	}
}

void displayData(string firstName[], string lastName[], double gpa[])
{
	cout << fixed << setprecision(2);
	cout << "STUDENT LIST" << endl;
	cout << "----------------------------------" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << left << setw(10) << firstName[i]
			<< left << setw(12) << lastName[i]
			<< "GPA: " << gpa[i] << endl;
	}
	cout << endl;
}

void displayReverse(string firstName[], string lastName[], double gpa[])
{
	cout << fixed << setprecision(2);
	cout << "STUDENT LIST (REVERSED)" << endl;
	cout << "----------------------------------" << endl;

	for (int i = 9; i >= 0; i--)
	{
		cout << left << setw(10) << firstName[i]
			<< left << setw(12) << lastName[i]
			<< "GPA: " << gpa[i] << endl;
	}
	cout << endl;
}

int main()
{
	string firstName[10];
	string lastName[10];
	double gpa[10];

	ifstream infile;
	infile.open("C:\\Users\\raymo\\OneDrive - Triton College\\CIS121-070\\week 12\\students.txt");


	readData(firstName, lastName, gpa, infile);
	displayData(firstName, lastName, gpa);
	displayReverse(firstName, lastName, gpa);

	infile.close();

	system("pause");
	return 0;
}
