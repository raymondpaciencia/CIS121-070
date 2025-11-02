#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

void compute_tuition_and_fees(char student_code, int credits_taken, double& tuition_owed, double& course_fees)
{
    double cost_per_credit_hour;

    if (student_code == 'I' || student_code == 'i')
    {
        cost_per_credit_hour = 250.00;
    }
    else if (student_code == 'O' || student_code == 'o')
    {
        cost_per_credit_hour = 500.00;
    }
    else
    {
        cost_per_credit_hour = 0.00; 
    }

    tuition_owed = credits_taken * cost_per_credit_hour;
    course_fees = tuition_owed * 0.10;
}

int main()
{
    string last_name;
    char student_code;
    double credits_taken;
    double tuition_owed, course_fees;
    double sum_tuition = 0.0;
    int student_count = 0;

    ifstream infile;
    infile.open("C:\\Users\\raymo\\OneDrive - Triton College\\CIS121 - 070\\week 11\\students.txt");


    cout << fixed << setprecision(2);

    while (infile >> last_name >> student_code >> credits_taken)
    {
        compute_tuition_and_fees(student_code, credits_taken, tuition_owed, course_fees);

        cout << "Student: " << last_name << endl;
        cout << "Student Code: " << student_code << endl;
        cout << "Credits Taken: " << credits_taken << endl;
        cout << "Tuition Owed: $" << tuition_owed << endl;
        cout << "Course Fees:  $" << course_fees << endl;
        cout << "----------------------------------------" << endl;

        sum_tuition += tuition_owed;
        student_count++;
    }

    double avg_tuition = 0.0;
    avg_tuition = sum_tuition / student_count;

    cout << "Total Tuition Owed: $" << sum_tuition << endl;
    cout << "Number of Students: " << student_count << endl;
    cout << "Average Tuition per Student: $" << avg_tuition << endl;

    infile.close();

    system("pause");
    return 0;
}
