#include <iostream>
using namespace std;

int main()
{
    string lastName;
    int score;
    char grade;
    cout << "What is your last name: ";
    cin >> lastName;
    cout << "Enter your score " << lastName << R"(:)";
    cin >> score;
    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';
    cout << "Student: " << lastName << ", has a grade of: " << grade << endl;
	return 0;
}


