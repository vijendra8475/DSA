#include<iostream>
using namespace std;

void doubleIt(int &n) {
    n = n * 2;
}

void doubleIhThrowCallByValue(int n) {
    n = n * 2;
}

int main() {
    int n = 6;
    doubleIt(n);
    cout << n;
    // Reference of n in k and m
    // int &k = n;
    // int &m = n;
    // m--;
    // cout << "\nn : " << n << "\nk : " << k << "\nm : " << m;
}