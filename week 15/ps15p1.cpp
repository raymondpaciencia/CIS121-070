#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    Employee();
    void FirstName(string fn);
    string FirstName();
    void LastName(string ln);
    string LastName();
    void Salary(float s);
    float Salary();
    virtual float Bonus();
    ~Employee();

protected:
    string m_fn, m_ln;
    float m_salary;
    float m_bonus;
};

Employee::Employee()
{
    m_salary = 0;
}

Employee::~Employee()
{
    cout << "Goodbye" << endl;
    system("pause");
}

void Employee::FirstName(string fn)
{
    m_fn = fn;
}

string Employee::FirstName()
{
    return m_fn;
}

void Employee::LastName(string ln)
{
    m_ln = ln;
}

string Employee::LastName()
{
    return m_ln;
}

void Employee::Salary(float s)
{
    m_salary = s;
}

float Employee::Salary()
{
    return m_salary;
}

float Employee::Bonus()
{
    if (m_salary > 100000)
        m_bonus = m_salary * 0.20f;
    else
        m_bonus = m_salary * 0.10f;

    return m_bonus;
}

class Manager : public Employee
{
public:
    Manager();
    float Long_Term_Bonus();
    float Bonus();  
};

Manager::Manager() : Employee()
{
}

float Manager::Long_Term_Bonus()
{
    return m_salary * 0.50f;
}

float Manager::Bonus()
{
    return m_salary * 0.50f;
}

int main()
{
    Manager m;

    string fn, ln;
    float sal;

    cout << "Enter first name: ";
    cin >> fn;
    m.FirstName(fn);

    cout << "Enter last name: ";
    cin >> ln;
    m.LastName(ln);

    cout << "Enter salary: ";
    cin >> sal;
    m.Salary(sal);

    cout << "\n----- Manager Info -----\n";
    cout << "First Name: " << m.FirstName() << endl;
    cout << "Last Name: " << m.LastName() << endl;
    cout << "Salary: " << m.Salary() << endl;
    cout << "Bonus (Overridden): " << m.Bonus() << endl;
    cout << "Long Term Bonus: " << m.Long_Term_Bonus() << endl;

    return 0;
}
