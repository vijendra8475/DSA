#include<iostream>
using namespace std;
int main() {
    int n = 5;

    // O(1)
    for(int i=0; i<2; i++) 
        cout << i*i;
    cout << endl;

    // O(n)
    for(int i=0; i<n; i++)
        cout << i+1;
    cout << endl;

    // O(n^2)
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++)
            cout << j+1;
        cout << endl;
    }

}