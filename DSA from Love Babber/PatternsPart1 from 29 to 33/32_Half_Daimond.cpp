#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<=i; j++)
    //         cout << "* ";
    //     cout << endl;
    // }
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<=n-i; j++)
    //         cout << "* ";
    //     cout << endl;
    // }

    // another way

    int k = n;
    for (int i = 0; i < n; i++)
    {
        int c = 1;
        for(int j=0; j<k; j++) {
            if(j < n-i-1) 
                cout << ' ';
            else if(j<n) {
                cout << c++ ;
                if(j == n-1) {
                    c--;
                }
            }
            else
                cout << --c;
        }
        k++;
        cout << endl;
    }
}