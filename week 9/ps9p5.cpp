#include <iostream>
using namespace std;

double get_cost_per_credit(char district_code)
{
    double cost;
    if (district_code == 'I' || district_code == 'i')
        cost = 250.0;
    else if (district_code == 'O' || district_code == 'o')
        cost = 550.0;
    else
        cost = 0.0;

    return cost;
}

double compute_tuition(double credit_hours, double cost_per_credit)
{
    return credit_hours * cost_per_credit;
}

int main()
{
    string last_name;
    char district_code;
    double credit_hours, cost_per_credit, tuition;
    double total_tuition = 0.0;

    cout << "Enter student's last name (Ctrl+Z to stop): ";
    while (cin >> last_name)
    {
        cout << "Enter credit hours: ";
        cin >> credit_hours;

        cout << "Enter district code (I for In-District, O for Out-of-District): ";
        cin >> district_code;

        cost_per_credit = get_cost_per_credit(district_code);
        tuition = compute_tuition(credit_hours, cost_per_credit);

        cout << "Student: " << last_name << endl;
        cout << "Tuition cost: $" << tuition << endl;
        cout << "_____________________________________" << endl;

        total_tuition += tuition;

        cout << "Enter student's last name (Ctrl+Z to stop): ";
    }

    cout << endl;
    cout << "Total of all tuition costs: $" << total_tuition << endl;

    return 0;
}
