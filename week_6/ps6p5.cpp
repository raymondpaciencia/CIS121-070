#include <iostream>
using namespace std;

int main() {
    char job_code;
    int hours;
    double rate, gross;

    cout << "Enter job code (L, J, or A): ";
    cin >> job_code;
    cout << "Enter hours worked: ";
    cin >> hours;

    if (job_code == 'L' && hours > 40) 
    {
        rate = 50.00;
    }
    else if (job_code == 'L' && hours <= 40) 
    {
        rate = 40.00;
    }
    else if (job_code == 'J' && hours > 60) 
    {
        rate = 100.00;
    }
    else if (job_code == 'J' && hours <= 60) 
    {
        rate = 75.00;
    }

    else if (job_code == 'A' && hours > 40) 
    {
        rate = 25.00;
    }
    else if (job_code == 'A' && hours <= 40) 
    {
        rate = 20.00;
    }
    else {
        rate = 0.00; 
    }

    gross = hours * rate;

    cout << "Gross Salary: $" << gross << endl;

    return 0;
}
