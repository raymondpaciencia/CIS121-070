#include <iostream>
using namespace std;

double compute_mpg(double miles, double gallons)
{
    return miles / gallons;
}

double compute_gas_cost(double gallons)
{
    return gallons * 3.50;
}

int main()
{
    string destination_city;
    double miles, gallons, mpg, cost;
    double total_cost = 0.0;

    cout << "Enter destination city (Ctrl+Z to stop): ";
    while (cin >> destination_city)
    {
        cout << "Enter miles travelled: ";
        cin >> miles;

        cout << "Enter gallons used: ";
        cin >> gallons;

        mpg = compute_mpg(miles, gallons);
        cost = compute_gas_cost(gallons);

        cout << "Destination City: " << destination_city << endl;
        cout << "Miles per gallon: " << mpg << endl;
        cout << "Cost of gas: $" << cost << endl;
        cout << "_____________________________________" << endl;

        total_cost += cost;

        cout << "Enter destination city (Ctrl+Z to stop): ";
    }

    cout << endl;
    cout << "Total cost of gas for all trips: $" << total_cost << endl;

    return 0;
}
