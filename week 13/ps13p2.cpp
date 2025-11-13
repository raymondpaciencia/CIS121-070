#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    string first;
    string last;
    double hours;
    double rate;
    double gross;
};

double calcGross(double h, double r);

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    vector<Employee> emp(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter first name: ";
        cin >> emp[i].first;
        cout << "Enter last name: ";
        cin >> emp[i].last;
        cout << "Enter hours: ";
        cin >> emp[i].hours;
        cout << "Enter rate: ";
        cin >> emp[i].rate;

        emp[i].gross = calcGross(emp[i].hours, emp[i].rate);
    }

    cout << "\nEmployee Info:\n";
    for (int i = 0; i < n; i++) {
        cout << emp[i].first << " " << emp[i].last << " ";
        cout << "Hours: " << emp[i].hours << " Rate: " << emp[i].rate;
        cout << " Gross Pay: " << emp[i].gross << endl;
    }

    return 0;
}

double calcGross(double h, double r) {
    double pay;
    if (h > 40)
        pay = 40 * r + (h - 40) * (r * 1.5);
    else
        pay = h * r;
    return pay;
}
