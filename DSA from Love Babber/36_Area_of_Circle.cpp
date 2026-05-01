#include<iostream>
using namespace std;

float area_of_circle(int n) {
    return float(3.14*n*n);
}

int main() {
    int area;
    cout << "Enter radius of circle : ";
    cin >> area;

    cout << "Area of circle on the bases of given circle : " << area_of_circle(area);
}