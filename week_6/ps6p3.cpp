#include <iostream>
using namespace std;

int main() 
{
    int tickets;
    char location;
    double pricePerTicket, totalCost;

    cout << "Enter number of tickets: ";
    cin >> tickets;
    cout << "Enter location code (H or L): ";
    cin >> location;

    if (location >= 'a' && location <= 'z') {
        location = location - 'a' + 'A';
    }

    if (tickets > 25 || location == 'H') {
        pricePerTicket = 30.0;
    }
    else if ((tickets >= 10 && tickets <= 24) || location == 'L') {
        pricePerTicket = 40.0;
    }
    else {
        pricePerTicket = 50.0;
    }

    totalCost = tickets * pricePerTicket;

    cout << "Number of Tickets: " << tickets << ", the price per Ticket is: $" << pricePerTicket << ", and the total cost is: $" << totalCost << endl;

    return 0;
}
