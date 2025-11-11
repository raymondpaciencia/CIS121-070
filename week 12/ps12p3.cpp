#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

void readData(string firstName[], string lastName[], double salary[], int size, ifstream& infile)
{
	for (int i = 0; i < size; i++)
	{
		infile >> firstName[i] >> lastName[i] >> salary[i];
	}
}

void displayData(string firstName[], string lastName[], double salary[], int size)
{
	cout << fixed << setprecision(2);
	cout << "EMPLOYEE LIST" << endl;
	cout << "--------------------------------------" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << firstName[i] << " " << lastName[i]
			<< "  Salary: $" << salary[i] << endl;
	}
	cout << endl;
}

int searchEmployee(string lastName[], int size, string searchName)
{
	for (int i = 0; i < size; i++)
	{
		if (lastName[i] == searchName)
		{
			return i; // found
		}
	}
	return -1; // not found
}

int main()
{
	const int SIZE = 10;
	string firstName[SIZE];
	string lastName[SIZE];
	double salary[SIZE];
	string searchName;

	ifstream infile;
	infile.open("C:\\Users\\raymo\\OneDrive - Triton College\\CIS121-070\\week 12\\Empldata.txt");

	if (!infile)
	{
		cout << "Error opening file." << endl;
		return 1;
	}

	readData(firstName, lastName, salary, SIZE, infile);
	displayData(firstName, lastName, salary, SIZE);

	cout << "Enter a last name to search (Ctrl+Z to stop): ";
	while (cin >> searchName)
	{
		int index = searchEmployee(lastName, SIZE, searchName);

		if (index != -1)
		{
			cout << firstName[index] << " " << lastName[index]
				<< " earns $" << salary[index] << endl;
		}
		else
		{
			cout << searchName << " not found." << endl;
		}

		cout << "Enter a last name to search (Ctrl+Z to stop): ";
	}

	cout << "Goodbye!" << endl;

	infile.close();

	system("pause");
	return 0;
}
