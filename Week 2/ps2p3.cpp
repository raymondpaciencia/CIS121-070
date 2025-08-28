#include <iostream>
using namespace std;

int main()
{
	double lenght, width, circumference, area;
	cout << "What is the length of the rectangle? ";
	cin >> lenght;
	cout << "What is the width of the rectangle? ";
	cin >> width;
	circumference = 2 * lenght + 2 * width;
	area = lenght * width;
	cout << "The circumference is " << circumference << endl;
	cout << "The area is " << area << endl;

	return 0;
}

