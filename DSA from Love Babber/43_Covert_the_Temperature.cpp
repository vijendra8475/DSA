#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
vector<double> convertTemperature(double celsius)
{
    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32.00;

    vector<double> temp;

    temp.push_back(k);
    temp.push_back(f);

    return temp;
}

int main()
{
    vector<double> ans = convertTemperature(36.50);
    for (double i : ans)
    {
        cout << "\n"
             << i;
    }
}