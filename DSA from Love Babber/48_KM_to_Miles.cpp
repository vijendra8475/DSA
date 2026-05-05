#include<iostream>
using namespace std;

float convertToMiles(float km) {
    return km * 0.6213712;
}

int main() {
    float km;
    cout << "\nEnter Kilometers : ";
    cin >> km;
    cout<< "\nKilometers into Miles : " << convertToMiles(km);
}