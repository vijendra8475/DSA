#include<iostream>
using namespace std;
string checkEvenOrOdd(int n) {
    return n & 1 == 0 ? "Even" : "Odd";
}

int main() {
    int n;
    cout << "Enter Number of check that it is even or odd : ";
    cin >> n;

    cout << "\nEntered Number is : " << checkEvenOrOdd(n) << " ! ";
}