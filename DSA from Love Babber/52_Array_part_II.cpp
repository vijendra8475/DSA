#include<iostream>
using namespace std;

int findUnique(int *a, int n) {
    int m = 0;
    for(int i=0; i<n; i++)
        m ^= a[i];
    return m;
}

void allPairs(int *a, int n) {
    cout << "\n\nAll posiible pairs : " ;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout << " [" << a[i] << "," << a[j] << "] ";
        cout << endl;
    }
}

int main() {
    int a[5] = {1,2,3,2,1};

    // cout << "\nUnique element : " << findUnique(a, 5);
    allPairs(a, 5);
}