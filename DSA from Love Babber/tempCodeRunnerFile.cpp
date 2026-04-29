#include<iostream>
using namespace std;
int main() {
    int n =5;

    for(int i=0; i<n; i++) {
        int c = i <= n/2 ? 2*i : 0;

        int num = 1;
        for(int j=0; j<=c; j++) {    
            if(j<c/2) cout << num++ << "  ye num " << num;
            else if(j== c/2) {
                cout << "*" << num;
                num = num-1;
            }
            else {
                cout << --num;
            }
        }
        cout << endl;
    }
}