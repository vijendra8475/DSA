#include<iostream>
#include<vector>
using namespace std;

int singleNumber( vector<int> &a) {
    int n = 0;
    for(int x : a)
        n = n^x;
    return n;
}

int main(){
    vector<int> a = {1,3,4,6,4,1,3};
    int unique = singleNumber(a);
    cout << "\nUnique number is : " << unique;
}