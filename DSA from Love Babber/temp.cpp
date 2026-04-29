#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int k = n;
    for (int i = 0; i < 2*n-1; i++)
    {
        int c;
        if(i < n) c = i;
        else c = n - (i % n) -2;
        
        for(int j=0; j<=c; j++)
            cout << "*";
        cout << endl;
    }
}