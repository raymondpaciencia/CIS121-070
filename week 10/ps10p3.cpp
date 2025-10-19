#include <iostream>
using namespace std;

void computeTuition(double creditHours, double financialAid, double& tuition, double& tuitionOwed)
{
    tuition = creditHours * 250;
    tuitionOwed = tuition - financialAid;
}

int main()
{
    string lastName;
    double creditHours, financialAid, tuition, tuitionOwed;
    double totalOwed = 0, averageOwed = 0;
    int count = 0;

    cout << "Enter last name, credit hours, and financial aid (Ctrl+Z to stop): ";

    while (cin >> lastName >> creditHours >> financialAid)
    {
        computeTuition(creditHours, financialAid, tuition, tuitionOwed);
        count++;
        totalOwed += tuitionOwed;

        cout << "____________" << endl;
        cout << "Student: " << lastName << endl;
        cout << "Tuition: $" << tuition << endl;
        cout << "Tuition Owed: $" << tuitionOwed << endl;
        cout << "____________" << endl;
        cout << "\nEnter next last name, credit hours, and financial aid (Ctrl+Z to stop): ";
    }

    if (count > 0)
        averageOwed = totalOwed / count;

    cout << "\nTotal entries: " << count << endl;
    cout << "Total tuition owed: $" << totalOwed << endl;
    cout << "Average owed: $" << averageOwed << endl;

    return 0;
}
