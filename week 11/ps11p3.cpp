#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

double compute_mpg(double miles, double gallons)
{
    return miles / gallons;
}

int main()
{
    double gallons, miles;
    double mpg;
    double sum_gallons = 0.0;
    double sum_miles = 0.0;

    ifstream infile;
    infile.open("C:\\Users\\raymo\\OneDrive - Triton College\\CIS121-070\\week 11\\trips.txt");

    cout << fixed << setprecision(2);

    while (infile >> gallons >> miles)
    {
        mpg = compute_mpg(miles, gallons);

        cout << "Gallons used: " << gallons << endl;
        cout << "Miles travelled: " << miles << endl;
        cout << "Miles per gallon (MPG): " << mpg << endl;
        cout << "----------------------------------------" << endl;

        sum_gallons += gallons;
        sum_miles += miles;
    }

    cout << "----------------------------------------" << endl;
    cout << "Total Gallons Used:  " << sum_gallons << endl;
    cout << "Total Miles Travelled: " << sum_miles << endl;

    infile.close();

    system("pause");

    return 0;
}
