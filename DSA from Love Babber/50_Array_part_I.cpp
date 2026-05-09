#include<iostream>
using namespace std;

void count0sand1s(int* a, int n) {
    int z=0, o=0;
    for(int i=0; i<n; i++)
        if(a[i] == 1)
            o++;
        else if(a[i] == 0)
            z++;

    cout << "\nZeros : " << z;
    cout << "\nOnes : " << o;
}

void revArray(int* a, int n) {
    int st = 0, end = n-1;
    while (st < end) 
    {
        int tem = a[st];
        a[st] = a[end];
        a[end] = tem;
        st++;
        end--;
    }

    cout << "\nNew Array : ";
    for(int i=0; i<10; i++)
        cout << " " << a[i];
    
}

void ExtremePrint(int* a, int n) {
    int st = 0, end = n-1;
    while (st <= end)
    {
        if(st != end)
            cout << a[st] << " ";
        cout << a[end] << " ";
        st++;
        end--;
    }
    
}

int main() {
    int a[10];
    // cout << "\nBase address of array : " << a;
    // cout << "\nSize of array : " << sizeof(a);

    // valid initilization
    // int b[] = {2,3,4,5,6,7};
    // int c[3] = {1,2,3};
    // float d[5] = {2.3};

    // Invalid 
    // char name[2] = {'a','b','c'};
    // cout << "\nSize of new array : " << sizeof(name);


    // Array input using loop
    cout << "\nEnter 10 array elements of interger type : ";
    for(int i=0; i<10; i++) 
        cin >> a[i];

    // Double the elements's value
    // for(int i=0; i<10; i++) 
    //     a[i] *= 2;

    // sum of all elements of array 
    // int sum = 0;
    // for(int i=0; i<10; i++)
    //     sum += a[i];
    
    // cout << "\nSum of all elememnts of array : " << sum;


    // Enter Element which you want top search 
    // int n;
    // cout << "\nEnter Element which you want top search : ";
    // cin >> n;

    // Linear Search
    // for(int i=0; i<10; i++) 
    //     if(n == a[i]) {
    //         cout << "\nEntered Element is in : " << i+1 << "th position ";
    //         break;
    //     }
    // cout << "\nElement not found";


    // Count 0's and 1's in array
    // count0sand1s(a,10);

    // Reverse an Array
    // revArray(a, 10);

    // Exterem Print
    ExtremePrint(a, 9);

    // Array Output using loop
    // cout << "\nYour Array Elements : " ;
    // for(int i=0; i<10; i++) 
    //     cout << a[i] << " ";
}