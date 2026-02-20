#include<iostream>
#include<math.h>
using namespace std;

int checkPrime(int n) {
    for(int i=2; i<n; i++){
        if (n%i == 0)
            return false;
    }
    return true;
}

void printPrimeNumbers(int n) {
    cout << "\nNumbers are : ";
    for(int i=2; i<=n; i++)
        if(checkPrime(i))
            cout << "\t" << i;
}

void fibonacci(int n) {
    int a[n];
    a[0] = 0;
    a[1] = 1;

    for(int i=2; i<=n; i++){
        a[i] = a[i-1] + a[i-2];
    }

    cout << "\nSeries : ";
    for(int i=0; i<n; i++)
        cout << "\t" << a[i];
}

int main() {
    fibonacci(5);
}