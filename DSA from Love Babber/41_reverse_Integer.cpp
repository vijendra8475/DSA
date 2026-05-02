#include<iostream>
using namespace std;

int reverseInteger(int n) {
     if( n <= INT32_MIN)
            return 0;
        bool signedN = false;
        if(n < 0) {
            n = -n;
            signedN = true;
        }
        int a = 0;
        while(n) {

            if(a > INT32_MAX/10)
                return 0;

            a = a*10 + n%10;
            n /= 10;
        }
        return signedN ? -a : a;
}

int main() {
    int n;
    cout << "\nEnter a number which you want to reverse : ";
     cin >> n;

     cout << "\nYour Reverse Interegr is : " << reverseInteger(n);
}