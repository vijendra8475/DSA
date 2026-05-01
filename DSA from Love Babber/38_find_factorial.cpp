#include<iostream>
using namespace std;

long long int factorial(int n) {
    return n ? n * factorial(n-1) : 1;
}

int main() {
    int n;
    cout << "Enter a number whose factorial you want : ";
    cin >> n;

    cout << "Factorial of given Number is : " << factorial(n);
}