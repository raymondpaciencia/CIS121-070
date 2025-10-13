#include <iostream>
using namespace std;

double compute_batting_average(double hits, double at_bats)
{
    return hits / at_bats;
}

int main()
{
    string last_name;
    double hits, at_bats, batting_average;
    int player_count = 0;

    cout << "Enter player's last name (Ctrl+Z to stop): ";
    while (cin >> last_name)
    {
        cout << "Enter number of hits: ";
        cin >> hits;

        cout << "Enter number of at bats: ";
        cin >> at_bats;

        batting_average = compute_batting_average(hits, at_bats);

        cout << "Player: " << last_name << endl;
        cout << "Batting average: " << batting_average << endl;
        cout << "_____________________________________" << endl;

        player_count++;

        cout << "Enter player's last name (Ctrl+Z to stop): ";
    }

    cout << endl;
    cout << "Number of players entered: " << player_count << endl;

    return 0;
}
