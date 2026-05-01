#include<iostream>
using namespace std;
int main() {
    int n = 5;

    for(int i=0; i<2*n; i++) {

        int fs = i < n ? i : (2*n)-i-1;
        int s = i < n ? i+2*(n-1-i) : fs+2*(i-n);

        for(int j=0; j<2*n; j++) {
            if(j <= fs) 
                cout << " * ";
            else if( j<= s)
                cout << "   ";
            else
                cout << " * ";
        }

        cout << endl;
    }
}