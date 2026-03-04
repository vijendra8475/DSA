#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> a = { 1,2,3,4,5 };

    cout << "\nAll possible sub-arrays are : ";

    for(int i=0; i<a.size(); i++) {
        cout << endl;
        for(int j=i; j<a.size(); j++) {
            for(int k=i; k<=j; k++) {
                cout << a[k];
            }
            cout << "\t";
        }
    }
}