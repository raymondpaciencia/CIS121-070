#include <iostream>
#include <string>
using namespace std;

int main() {
    string last_name;
    double hits, at_bats, batting_average, player_count = 0;

    cout << "Enter last name: ";
    cin >> last_name;
    cout << "enter how many times you swung the bat: ";
    cin >> hits;
    cout << "enter how many balls actually hit the bat: ";
    cin >> at_bats;

    while (cin.eof() == false) 
    {
        batting_average = hits * 1.0 / at_bats;

        cout << "Last name: " << last_name << endl;
        cout << "Batting average: " << batting_average << endl;

        player_count = player_count + 1;

        cout << "Enter last name: ";
        cin >> last_name;
        cout << "enter how many times you swung the bat: ";
        cin >> hits;
        cout << "enter how many balls actually hit the bat: ";
        cin >> at_bats;
    }

    cout << "Total number of players: " << player_count << endl;

    return 0;
}
