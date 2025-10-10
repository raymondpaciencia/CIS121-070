#include <iostream>
using namespace std;

double compute_pay(char job_code, double hours_worked)
{
    double rate = 0.0;

    if (job_code == 'L' || job_code == 'l')
        rate = 25.0;
    else if (job_code == 'A' || job_code == 'a')
        rate = 30.0;
    else if (job_code == 'J' || job_code == 'j')
        rate = 50.0;

    if (hours_worked > 40)
        return (40 * rate) + ((hours_worked - 40) * (rate * 1.5));
    else
        return hours_worked * rate;
}

int main()
{
    string lastname;
    char job_code;
    double hours_worked, average_pay, pay;
    double total_pay = 0.0;
    int sum_of_entries = 0;

    cout << "Enter last name (Ctrl+Z to stop): ";
    while (cin >> lastname)
    {
        cout << "Enter job code (L, A, or J): ";
        cin >> job_code;

        cout << "Enter hours worked: ";
        cin >> hours_worked;

        pay = compute_pay(job_code, hours_worked);

        cout << "Employee: " << lastname << endl;
        cout << "Pay: " << pay << endl;
        cout << "_________________________________________________________________" << endl;

        total_pay += pay;
        sum_of_entries++;

        cout << "Enter last name (Ctrl+Z to stop): ";
    }

    average_pay = total_pay / sum_of_entries
    ;
    cout << "Total pay: " << total_pay << endl;
    cout << "Number of entries: " << sum_of_entries << endl;
    cout << "Average pay: " << average_pay << endl;

    return 0;
}
