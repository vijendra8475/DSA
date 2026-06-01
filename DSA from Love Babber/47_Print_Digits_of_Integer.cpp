#include<iostream>
using namespace std;

void printDigits(int n) {
    if(n) {
        printDigits(n/10);
        cout << n%10 << " ";
    }   
}

int main() {
    int n;
    cout << "\nEnter Number : " ;
    cin >> n;
    printDigits(n);
}