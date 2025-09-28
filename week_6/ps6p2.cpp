#include <iostream>
using namespace std;

int main() {
    int partNumber, quantity;
    double costPerUnit, totalCost;

    cout << "Enter a number (10, 99, 55, 70, 50): ";
    cin >> partNumber;
    cout << "Enter the quantity of that number: ";
    cin >> quantity;

    if (partNumber > 1000 && quantity >= 1) {
        costPerUnit = 1.00;
    }
    else if (partNumber > 500 && quantity >= 1) {
        costPerUnit = 2.00;
    }
    else {
        costPerUnit = 5.00;
    }

    totalCost = costPerUnit * quantity;

    cout << "Your part Number is: " << partNumber << " your cost per Unit is: $" << costPerUnit << " and your total Cost comes to: $" << totalCost << endl;

    return 0;
}
