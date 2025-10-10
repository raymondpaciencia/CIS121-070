#include <iostream>
using namespace std;

double compute_mpg(double miles, double gallons)
{
    return miles / gallons;
}

int main()
{
    string destination_city;
    double miles_travelled, gallons_used;
    double sum_of_miles = 0.0;
    int sum_of_entries = 0;

    cout << "Enter destination city (Ctrl+Z to stop): ";
    while (cin >> destination_city)
    {
        cout << "Enter miles traveled: ";
        cin >> miles_travelled;

        cout << "Enter gallons used: ";
        cin >> gallons_used;

        double miles_per_gallon = compute_mpg(miles_travelled, gallons_used);

        cout << "Destination: " << destination_city << ", Miles/Gallon: " << miles_per_gallon << endl;
        cout << "_________________________________________________________________" << endl;

        sum_of_miles += miles_travelled;
        sum_of_entries++;

        cout << "Enter destination city (Ctrl+Z to stop): ";
    }

    cout << "Total miles traveled: " << sum_of_miles << endl;
    cout << "Number of trips: " << sum_of_entries << endl;

    return 0;
}
