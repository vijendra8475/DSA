#include<iostream>
using namespace std;

int findUnique(int *a, int n) {
    int m = 0;
    for(int i=0; i<n; i++)
        m ^= a[i];
    return m;
}

int main() {
    int a[5] = {1,2,3,2,1};

    cout << "\nUnique element : " << findUnique(a, 5);
}