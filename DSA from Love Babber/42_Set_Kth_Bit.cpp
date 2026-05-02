#include<iostream>
using namespace std;
int setKthBit(int n, int k) {
    int newNum = 1 << k;
    return (n|newNum);
}

int main() 
{
    int n;
    cout << "\nEnter a number : ";
    cin >> n;
    
    cout << "Answer : " << setKthBit(n, 2);
}