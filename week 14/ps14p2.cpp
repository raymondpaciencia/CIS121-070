#include <iostream>
#include <string>
using namespace std;

class ComputerAsset
{
protected:
    string make;
    string model;
    string cpu;
    string ram;
    string drive;
    string type;

public:
    ComputerAsset()
    {
        make = "Lenovo";
        model = "LE100A";
        cpu = "Intel";
        ram = "32GB";
        drive = "HD";
        type = "Laptop";
    }

    void setMake(string m)
    {
        if (m == "Lenovo" || m == "HP" || m == "Apple")
            make = m;
        else
            make = "Lenovo";
    }

    void setModel(string mo)
    {
        if (mo.find(' ') == string::npos)
            model = mo;
        else
            model = "LE100A";
    }

    void setCPU(string c)
    {
        if (c == "Intel" || c == "AMD")
            cpu = c;
        else
            cpu = "Intel";
    }

    void setRAM(string r)
    {
        if (r == "8GB" || r == "16GB" || r == "32GB")
            ram = r;
        else
            ram = "32GB";
    }

    void setDrive(string d)
    {
        if (d == "SSD" || d == "HD")
            drive = d;
        else
            drive = "HD";
    }

    void setType(string t)
    {
        if (t == "Laptop" || t == "Notebook" || t == "Tablet" || t == "Desktop")
            type = t;
        else
            type = "Laptop";
    }

    string getMake() { return make; }
    string getModel() { return model; }
    string getCPU() { return cpu; }
    string getRAM() { return ram; }
    string getDrive() { return drive; }
    string getType() { return type; }

    double getCost()
    {
        double cost = 0;

        if (make == "Lenovo") cost += 1200;
        else if (make == "HP") cost += 1000;
        else if (make == "Apple") cost += 2000;

        if (cpu == "Intel") cost += 200;

        if (ram == "16GB") cost += 300;
        else if (ram == "32GB") cost += 500;

        if (drive == "SSD") cost += 500;

        if (type == "Laptop") cost += 300;
        else if (type == "Tablet") cost -= 200;

        return cost;
    }
};

int main()
{
    ComputerAsset comp;

    while (true)
    {
        cout << "Enter computer make (Lenovo/HP/Apple). Ctrl+Z to quit: ";
        string mk;
        if (!(cin >> mk)) break;
        comp.setMake(mk);

        cout << "Enter model (no spaces): ";
        string mdl;
        cin >> mdl;
        comp.setModel(mdl);

        cout << "Enter CPU (Intel/AMD): ";
        string c;
        cin >> c;
        comp.setCPU(c);

        cout << "Enter RAM (8GB/16GB/32GB): ";
        string r;
        cin >> r;
        comp.setRAM(r);

        cout << "Enter drive type (SSD/HD): ";
        string d;
        cin >> d;
        comp.setDrive(d);

        cout << "Enter computer type (Laptop/Notebook/Tablet/Desktop): ";
        string t;
        cin >> t;
        comp.setType(t);

        cout << "\n--- Computer Asset Info ---\n";
        cout << "Make: " << comp.getMake() << endl;
        cout << "Model: " << comp.getModel() << endl;
        cout << "CPU: " << comp.getCPU() << endl;
        cout << "RAM: " << comp.getRAM() << endl;
        cout << "Hard Drive: " << comp.getDrive() << endl;
        cout << "Type: " << comp.getType() << endl;
        cout << "Total Cost: $" << comp.getCost() << endl;
        cout << "-----------------------------\n\n";
    }

    return 0;
}
