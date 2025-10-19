#include <iostream>
#include <math.h>
using namespace std;

void computeAmounts(double amount, double rate5, double rate10, double& fiveYearAmount, double& tenYearAmount)
{
    fiveYearAmount = amount * pow(1 + rate5, 5);
    tenYearAmount = amount * pow(1 + rate10, 10);
}

int main()
{
    double amount, rate5, rate10, fiveYearAmount, tenYearAmount;
    int count = 0;

    cout << "Enter amount, 5 year rate, and 10 year rate (Ctrl+Z to stop): ";

    while (cin >> amount >> rate5 >> rate10)
    {
        computeAmounts(amount, rate5, rate10, fiveYearAmount, tenYearAmount);
        count++;

        cout << "____________" << endl;
        cout << "Investment Amount: $" << amount << endl;
        cout << "Five Year Amount: $" << fiveYearAmount << endl;
        cout << "Ten Year Amount: $" << tenYearAmount << endl;
        cout << "____________" << endl;
        cout << "\nEnter next amount, 5 year rate, and 10 year rate (Ctrl+Z to stop): ";
    }

    cout << "\nTotal entries: " << count << endl;
    return 0;
}
