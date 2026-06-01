#include <iostream>
#include <vector>
using namespace std;
// Lecture 10 : All Possible subarray
void temp101()
{
    vector<int> a = {1, 2, 3, 4, 5};

    cout << "\nAll possible sub-arrays are : \n";

    for(int i=0; i<5; i++) {
        for(int j=i; j<5; j++) {
            for(int k=i; k<=j; k++)
                cout << " " << a[k];
            cout << "\t";
        }
        cout << "\n";
    }
}
// Lecture 10 : Maximum subarray brute force
void temp102()
{
    vector<int> a = {3, -4, 5, 4, -1, 7, -8};

    int max2 = 0;
    
    for(int i=0; i<a.size(); i++) {
        int curr = 0;
        for(int j=i; j<a.size(); j++) {
            curr += a[j];
            max2 = max(max2, curr);
        }
    }
    cout << "\nMax possible sub-arrays are : " << max2;
}

// Lecture 10 : Kadane's Algorithem
void temp103()
{
    vector<int> a = {3, -4, 5, 4, -1, 7, -8};

    int max2 = 0;
    int curr = 0;
    
    for(int i=0; i<a.size(); i++) {
        curr += a[i];
        max2 = max(max2, curr);
        if(curr < 0)
            curr = 0;
    }
    cout << "\nMax possible sub-arrays are : " << max2;
}

int main() {
    temp103();
}