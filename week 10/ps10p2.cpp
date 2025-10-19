#include <iostream>
using namespace std;

void computeCharges(double weight, int zip, double& weightCharge, double& areaCharge, double& postage)
{
    double ratePerOunce;
    if (weight > 100)
        ratePerOunce = 0.02;
    else if (weight > 50)
        ratePerOunce = 0.03;
    else
        ratePerOunce = 0.05;

    weightCharge = weight * ratePerOunce;

    if (zip == 60171)
        areaCharge = 2.00;
    else if (zip == 60172)
        areaCharge = 2.50;
    else if (zip == 60635)
        areaCharge = 3.00;
    else
        areaCharge = 5.00;

    postage = weightCharge + areaCharge;
}

int main()
{
    double weight, weightCharge, areaCharge, postage;
    int zip, count = 0;
    cout << "Enter weight and zip code (Ctrl+Z to stop): ";

    while (cin >> weight >> zip)
    {
        computeCharges(weight, zip, weightCharge, areaCharge, postage);
       
        cout << "\nEntry #" << count << " Results:\n";
        cout << "  Weight Charge: $" << weightCharge << endl;
        cout << "  Area Charge:   $" << areaCharge << endl;
        cout << "  Total Postage: $" << postage << endl;
        cout << "_____________________________________" << endl;
        cout << "\nEnter next weight and zip code (Ctrl+Z to stop): ";

        count++;
    }

    cout << "\nTotal entries made: " << count << endl;
    return 0;
}
