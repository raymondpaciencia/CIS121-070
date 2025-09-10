#include <iostream>
using namespace std;

int main()
{
	string name;
	double cost, warrantee, total;
	cout << "What is the name of the appliance you want? ";
	cin >> name;
	cout << "What is the cost of the appliance? ";
	cin >> cost; 
	if (cost > 1000)
	{
		warrantee = cost * 0.10;
		total = warrantee + cost;
		cout << "The appliance you picked; " << name << " costs " << cost << " and the warrantee costs is " << warrantee <<
			" which brings your total to " << total << endl;
	}
	else if (cost < 1000)
	{
		warrantee = cost * 0.05;
		total = warrantee + cost;
		cout << "The appliance you picked; "<< name << " costs " << cost << " and the warrantee costs is " << warrantee <<
			" which brings your total to " << total << endl;
	}
	return 0;
}

