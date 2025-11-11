#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

void readData(string city[], int population[], int size, ifstream& infile)
{
	for (int i = 0; i < size; i++)
	{
		infile >> city[i] >> population[i];
	}
}

void displayData(string city[], int population[], int size)
{
	cout << "CITY POPULATION LIST" << endl;
	cout << "----------------------------------" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << left << setw(15) << city[i]
			<< "Population: " << population[i] << endl;
	}
	cout << endl;
}

int searchCity(string city[], int population[], int size, string searchName)
{
	for (int i = 0; i < size; i++)
	{
		if (city[i] == searchName)
		{
			return i; 
		}
	}
	return -1; 
}

int main()
{
	const int SIZE = 8;
	string city[SIZE];
	int population[SIZE];
	string searchName;

	ifstream infile;
	infile.open("C:\\Users\\raymo\\OneDrive - Triton College\\CIS121-070\\week 12\\cities.txt");

	if (!infile)
	{
		cout << "Error opening file." << endl;
		return 1;
	}

	readData(city, population, SIZE, infile);
	displayData(city, population, SIZE);

	cout << "Enter city name, ctrl+z to stop: ";
	while (cin >> searchName) 
	{
		int index = searchCity(city, population, SIZE, searchName);

		if (index != -1)
		{
			cout << city[index] << " has a population of "
				<< population[index] << endl;
		}
		else
		{
			cout << searchName << " not found" << endl;
		}

		cout << "Enter city name, ctrl+z to stop: ";
	}

	cout << "Goodbye. Have a nice day." << endl;

	infile.close();

	system("pause");
	return 0;
}
