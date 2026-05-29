#include<iostream>
#include<vector>
using namespace std;

void findDuplicateNumber(vector<int> &a) {
    int n = a.size();

    vector<int> d(n, 0);

    for(int i=0; i<n; i++) {
        if(d[a[i]] == 0)
            d[a[i]] = 1;
        else
            cout << "\nDuplicate : " << a[i];
    }
}

void another(vector<int> &a) {
    int n = a.size();

    for(int i=0; i<n; i++) {
        if(a[a[i]] > 0) 
            a[a[i]] = -a[a[i]];
        else
            cout << "\n" << a[i];
    }
}

int main() {
    vector<int> a = {1,3,4,4,2};
    another(a);
}