#include <iostream>
using namespace std;

double get_pay_rate(char job_code)
{
    double rate;
    if (job_code == 'L' || job_code == 'l')
        rate = 25.0;
    else if (job_code == 'A' || job_code == 'a')
        rate = 30.0;
    else if (job_code == 'J' || job_code == 'j')
        rate = 50.0;
    else
        rate = 0.0;

    return rate;
}

double compute_gross_pay(double hours_worked, double pay_rate)
{
    double gross;
    if (hours_worked > 40)
        gross = (40 * pay_rate) + ((hours_worked - 40) * pay_rate * 1.5);
    else
        gross = hours_worked * pay_rate;

    return gross;
}

int main()
{
    string last_name;
    char job_code;
    double hours_worked, pay_rate, gross_pay;
    double total_gross = 0.0;

    cout << "Enter employee's last name (Ctrl+Z to stop): ";
    while (cin >> last_name)
    {
        cout << "Enter job code (L, A, or J): ";
        cin >> job_code;

        cout << "Enter hours worked: ";
        cin >> hours_worked;

        pay_rate = get_pay_rate(job_code);
        gross_pay = compute_gross_pay(hours_worked, pay_rate);

        cout << "Employee: " << last_name << endl;
        cout << "Gross pay: $" << gross_pay << endl;
        cout << "_____________________________________" << endl;

        total_gross += gross_pay;

        cout << "Enter employee's last name (Ctrl+Z to stop): ";
    }

    cout << endl;
    cout << "Total gross pay for all employees: $" << total_gross << endl;

    return 0;
}
