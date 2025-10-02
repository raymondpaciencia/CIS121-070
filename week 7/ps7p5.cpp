#include <iostream>
#include <string>
using namespace std;

int main() {
    string student_last_name;
    int credit_hours;
    char district_code;
    double tuition;

    double total_tuition = 0;
    int total_credit_hours = 0;
    int student_count = 0;

    cout << "Enter student last name: ";
    cin >> student_last_name;

    while (cin.eof() == false) {
        cout << "Enter credit hours: ";
        cin >> credit_hours;
        cout << "Enter district code (I/O): ";
        cin >> district_code;

        if (district_code == 'I' || district_code == 'i')
            tuition = credit_hours * 250;
        else if (district_code == 'O' || district_code == 'o')
            tuition = credit_hours * 550;
        else
            tuition = 0;

        cout << "------------------------" << endl;
        cout << "Student: " << student_last_name << endl;
        cout << "Credit hours: " << credit_hours << endl;
        cout << "District: " << district_code << endl;
        cout << "Tuition owed: $" << tuition << endl;
        cout << "------------------------" << endl;

        total_tuition += tuition;
        total_credit_hours += credit_hours;
        student_count++;

        cout << "Enter student last name: ";
        cin >> student_last_name;
    }

    cout << "TOTAL students: " << student_count << endl;
    cout << "TOTAL credit hours: " << total_credit_hours << endl;
    cout << "TOTAL tuition: $" << total_tuition << endl;

    return 0;
}
