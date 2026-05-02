#include<iostream>
#include<math.h>
using namespace std;

bool checkPrime(int n) {
    for(int i=2; i<=sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    cout << "\nEnter nth term : ";
    cin >> n;

    cout << "\nAll the prime numbers from 1 to n : ";
    for(int i=3; i<=n; i++) 
        checkPrime(i) ? cout << "\t" << i : cout <<"";
}