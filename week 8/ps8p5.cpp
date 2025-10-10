#include <iostream>
using namespace std;

double compute_lab_fee(string department, int course_code)
{
    if ((department == "CIS" || department == "cis") && course_code == 101)
        return 50.00;
    else if ((department == "CIS" || department == "cis") && course_code == 121)
        return 100.00;
    else if ((department == "MAT" || department == "mat") && course_code == 111)
        return 25.00;
    else if ((department == "MAT" || department == "mat") && course_code == 112)
        return 35.00;
    else if ((department == "ENG" || department == "eng") && course_code == 100)
        return 55.00;
    else
        return 50.00;  // all others
}

int main()
{
    string department;
    int course_code;
    double lab_fee;
    double total_lab_fees = 0.0;
    int entry_count = 0;
    double average = 0.0;

    cout << "Enter department (Ctrl+Z to stop): " << endl;
    while (cin >> department)
    {
        cout << "Enter course code: ";
        cin >> course_code;

        lab_fee = compute_lab_fee(department, course_code);

        cout << "Department: " << department << endl;
        cout << "Course code: " << course_code << endl;
        cout << "Lab fee: " << lab_fee << endl;
        cout << "____________________________________________________" << endl;
        cout << "Enter department (Ctrl+Z to stop): ";

        total_lab_fees += lab_fee;
        entry_count++;
    }

    average = total_lab_fees / entry_count;

    cout << "Total lab fees: " << total_lab_fees << endl;
    cout << "Number of courses entered: " << entry_count << endl;
    cout << "Average lab fee: " << average << endl;

    return 0;
}
