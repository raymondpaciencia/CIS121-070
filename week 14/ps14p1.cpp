#include <iostream>
#include <string>
using namespace std;


class Membership
{
protected:
    string firstName;
    string lastName;
    int age;
    string type;

public:
    
    Membership()
    {
        firstName = "Not Entered";
        lastName = "Not Entered";
        age = 18;
        type = "Bronze";
    }

    void setFirstName(string fn)
    {
        firstName = fn;
    }

    void setLastName(string ln)
    {
        lastName = ln;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setType(string t)
    {
        if (t == "Gold" || t == "Silver" || t == "Bronze")
            type = t;
        else
            type = "Bronze";  
    }

    
    string getFirstName()
    {
        return firstName;
    }

    string getLastName()
    {
        return lastName;
    }

    int getAge()
    {
        return age;
    }

    string getType()
    {
        return type;
    }

    double getCost()
    {
        double cost;

        if (type == "Gold")
            cost = 1200.00;
        else if (type == "Silver")
            cost = 1000.00;
        else
            cost = 500.00;

        if (age > 50)
            cost *= 0.90;

        return cost;
    }
};


int main()
{
    Membership m;   

    while (true)
    {
