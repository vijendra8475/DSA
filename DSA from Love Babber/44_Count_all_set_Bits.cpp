#include<iostream>
using namespace std;

int countBits(int n) {
    int c = 0;

    while (n)
    {
        n & 1 == 1 ? c++ : n;
        n = n >> 1;

        // another easy way
        // n % 2 == 1 ? c++ : n;
        // n /= 2;
    }
    return c;
}

int main() {
    int n;
    cout << "\nEnter a number : ";
    cin >> n;

    cout << "\nTotal numbers of set bits in a given number is : " << countBits(n);
}