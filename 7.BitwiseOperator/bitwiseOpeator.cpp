#include<iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 8;
    cout << "\na & b: " << (a&b);
    cout << "\na | b: " << (a|b);
    cout << "\na ^ b: " << (a^b);
    cout << "\na << 1: " << (a<<1);
    cout << "\na >> b: " << (a>>1);
    cout << "\n~a: " << (~a);
}