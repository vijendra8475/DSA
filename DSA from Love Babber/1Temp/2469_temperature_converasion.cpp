#include <iostream>
#include <iomanip>
#include<vector>
using namespace std;
vector<double> convertTemperature(double celsius)
{
    vector<double> temp(2);
    temp[0] = celsius + 273.15;
    temp[1] = celsius * 1.80 + 32;
    return temp;
}

int main() {
    vector <double> ans = convertTemperature(36.50);
    for(double i : ans) {
        cout << "\n" << i;
    }
}