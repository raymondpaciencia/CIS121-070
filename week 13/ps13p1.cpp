#include <iostream>
#include <string>
using namespace std;

void showCars(string make[], string model[], int size);

int main() {
    int num;
    cout << "Enter number of cars: ";
    cin >> num;

    string make[num];
    string model[num];

    for (int i = 0; i < num; i++) {
        cout << "Enter make for car #" << i + 1 << ": ";
        cin >> make[i];
        cout << "Enter model for car #" << i + 1 << ": ";
        cin >> model[i];
    }

    cout << endl;
    showCars(make, model, num);

    return 0;
}

void showCars(string make[], string model[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Car #" << i + 1 << ": " << make[i] << " " << model[i] << endl;
    }
}
