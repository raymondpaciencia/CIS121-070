#include <iostream>
using namespace std;

double compute_tuition(double credits_taken)
{
	double tuition = credits_taken * 250;
	return tuition;
}

int main()
{
	string last_name;
	int credits_taken;
	int sum_of_entries = 0.0;
	double average;
	double tuition_sum = 0.0;
	double tuition = 0.0;
	
	cout << "Enter last name (Ctrl+Z to stop): ";

	while (cin >> last_name)
	{
		cout << "Enter credits taken: ";
		cin >> credits_taken;

		tuition = compute_tuition(credits_taken);

		cout << "Student: " << last_name << endl;
		cout << "Amount of credits: " << credits_taken << endl;
		cout << "Tuition owed: " << tuition << endl;
		cout << "______________________________________________________________________________" << endl;

		cout << "Enter last name (Ctrl+Z to stop): ";

		tuition_sum += tuition;
		sum_of_entries++;
	}
	average = tuition_sum / sum_of_entries;
	cout << "Total tuition: " << tuition_sum << endl;
	cout << "Number of students: " << sum_of_entries << endl;
	cout << "Average tuition: " << average << endl; 

	return 0;
}
