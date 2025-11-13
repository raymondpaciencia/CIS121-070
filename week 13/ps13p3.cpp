#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string first;
    string last;
    char code;
    int credits;
    double tuition;
};

double computeTuition(char code, int credits);
void showStudents(vector<Student> students);

int main() {
    vector<Student> students;
    Student s;

    cout << "Enter student info (Ctrl+Z to stop)\n";

    while (true) {
        cout << "First name: ";
        if (!(cin >> s.first)) break;
        cout << "Last name: ";
        cin >> s.last;
        cout << "District code (I or O): ";
        cin >> s.code;
        cout << "Credits: ";
        cin >> s.credits;

        s.tuition = computeTuition(s.code, s.credits);
        students.push_back(s);
    }

    showStudents(students);
    cout << "Total students: " << students.size() << endl;

    return 0;
}

double computeTuition(char code, int credits) {
    double rate;
    if (code == 'I' || code == 'i')
        rate = 250.0;
    else
        rate = 500.0;
    return credits * rate;
}

void showStudents(vector<Student> students) {
    cout << "\nStudent Info:\n";
    for (auto x : students) {
        cout << x.first << " " << x.last << " ";
        cout << "Code: " << x.code << " Credits: " << x.credits;
        cout << " Tuition: $" << x.tuition << endl;
    }
}
