#include<iostream>
#include<math.h>
using namespace std;

string checkPrime(int n) {
    for(int i=2; i<sqrt(n); i++) {
        if(i % n == 2)
            return "Prime Number";
    }
    return "Not a Prime Number";
}

int main() {
    int n;
    cout << "\nEnter a number to check it is prime or not : ";
    cin >> n;

    cout << "\nEntered number is : " << checkPrime(n);
}