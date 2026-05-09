#include<iostream>
using namespace std;
int main() {
    int a[10];
    // cout << "\nBase address of array : " << a;
    // cout << "\nSize of array : " << sizeof(a);

    // valid initilization
    int b[] = {2,3,4,5,6,7};
    int c[3] = {1,2,3};
    float d[5] = {2.3};

    // Invalid 
    // char name[2] = {'a','b','c'};
    // cout << "\nSize of new array : " << sizeof(name);


    // Array input using loop
    cout << "\nEnter 10 array elements of interger type : ";
    for(int i=0; i<10; i++) 
        cin >> a[i];

    // Double the elements's value
    for(int i=0; i<10; i++) 
        a[i] *= 2;

    // sum of all elements of array 
    int sum = 0;
    for(int i=0; i<10; i++)
        sum += a[i];
    
    cout << "\nSum of all elememnts of array : " << sum;

    // Array Output using loop
    // cout << "\nYour Array Elements : " ;
    // for(int i=0; i<10; i++) 
    //     cout << a[i] << " ";
}