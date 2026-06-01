#include<iostream>
using namespace std;

int ConvertToNum(int n, int num[]) {
    int res = 0;
    for(int i=0; i<n; i++)
        res = (res*10) + num[i];
    return res;
}

int main() {
    int n;
    cout << "\nEnter length : " ;
    cin >> n;
    int num[n];

    cout << "\nEnter digits : ";
    for(int i=0; i<n; i++)
        cin >> num[i];

    cout << "\nAnswer : " << ConvertToNum(n, num);
}