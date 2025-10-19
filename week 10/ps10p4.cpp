#include <iostream>
using namespace std;

double getCostPerWidget(int numWidgets)
{
    double cost;
    if (numWidgets > 100)
        cost = 8.00;
    else if (numWidgets > 50)
        cost = 9.00;
    else
        cost = 10.00;
    return cost;
}

void computeTotals(int numWidgets, double costPerWidget, double& extendedPrice, double& salesTax, double& totalOrder)
{
    extendedPrice = numWidgets * costPerWidget;
    salesTax = extendedPrice * 0.07;
    totalOrder = extendedPrice + salesTax;
}

int main()
{
    int numWidgets;
    double costPerWidget, extendedPrice, salesTax, totalOrder;
    double totalAllOrders = 0;
    int count = 0;

    cout << "Enter number of widgets (Ctrl+Z to stop): ";

    while (cin >> numWidgets)
    {
        costPerWidget = getCostPerWidget(numWidgets);
        computeTotals(numWidgets, costPerWidget, extendedPrice, salesTax, totalOrder);
        totalAllOrders += totalOrder;
        count++;

        cout << "____________" << endl;
        cout << "Widgets: " << numWidgets << endl;
        cout << "Cost per Widget: $" << costPerWidget << endl;
        cout << "Extended Price: $" << extendedPrice << endl;
        cout << "Sales Tax: $" << salesTax << endl;
        cout << "Total Order: $" << totalOrder << endl;
        cout << "____________" << endl;
        cout << "\nEnter number of widgets (Ctrl+Z to stop): ";
    }

    cout << "\nTotal orders: " << count << endl;
    cout << "Sum of all total orders: $" << totalAllOrders << endl;

    return 0;
}
