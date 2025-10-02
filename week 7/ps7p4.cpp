#include <iostream>
#include <string>
using namespace std;

int main() {
    string last_name;
    char job_code;
    double hours, rate, pay, overtime, overtime_pay, final_pay;

    double total_pay = 0;
    int employee_count = 0;
    double average_pay = 0;

    cout << "Enter your last name: ";
    cin >> last_name;
    cout << "Enter what job code you have (L/A/J): ";
    cin >> job_code;
    cout << "Enter the amount of hours you worked: ";
    cin >> hours;

    while (cin.eof() == false) 
    {
        if (job_code == 'L' || job_code == 'l')
            rate = 25;
        else if (job_code == 'A' || job_code == 'a')
            rate = 30;
        else if (job_code == 'J' || job_code == 'j')
            rate = 50;
        else
            rate = 0; 

        if (hours > 40) 
        {
            pay = 40 * rate;                 
            overtime = hours - 40;          
            overtime_pay = overtime * 1.5 * rate; 
            final_pay = pay + overtime_pay;
        }
        else 
        {
            final_pay = hours * rate;      
        }

        cout << "------------------------" << endl;
        cout << "Last name: " << last_name << endl;
        cout << "Job code: " << job_code << endl;
        cout << "Hours worked: " << hours << endl;
        cout << "Pay: " << final_pay << endl;
        cout << "------------------------" << endl;

        
        total_pay = total_pay + final_pay;
        employee_count = employee_count + 1;

        
        cout << "Enter your last name: ";
        cin >> last_name;
        cout << "Enter what job code you have (L/A/J): ";
        cin >> job_code;
        cout << "Enter the amount of hours you worked: ";
        cin >> hours;
    }

    average_pay = total_pay / employee_count;


    cout << "Total employees: " << employee_count << endl;
    cout << "Average pay: " << average_pay << endl;

    return 0;
}
