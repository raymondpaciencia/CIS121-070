#include <iostream>
#include <string>
using namespace std;

int main() {
    string city;
    double miles, gallons, miles_per_gallon, total_miles = 0;
    int trip_count = 0;

    cout << "Enter destination city: ";
    cin >> city;
    cout << "Enter miles travelled: ";
    cin >> miles;
    cout << "Enter gallons used: ";
    cin >> gallons;

    while (cin.eof() == false) 
    {
        miles_per_gallon = miles / gallons;

        cout << "Destination: " << city << endl;
        cout << "Miles per gallon: " << miles_per_gallon << endl;
        cout << "---------------------------------------------------" << endl;

        total_miles = total_miles + miles;
        trip_count = trip_count + 1;

        cout << "Enter destination city: ";
        cin >> city;
        cout << "Enter miles travelled: ";
        cin >> miles;
        cout << "Enter gallons used: ";
        cin >> gallons;
    }

    cout << "Total miles travelled: " << total_miles << endl;
    cout << "Total number of trips: " << trip_count << endl;

    return 0;
}
