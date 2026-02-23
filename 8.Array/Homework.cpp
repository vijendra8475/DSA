#include<iostream>
using namespace std;

void sumOfAllvaluesOfArray(int a[], int n) {
    int sum = 0;
    for(int i=0; i< n; i++)
        sum += a[i];

    cout << "\nSum of all values of an array : " << sum;
}
void productOfAllvaluesOfArray(int a[], int n) {
    int product = 1;
    for(int i=0; i< n; i++)
        product *= a[i];

    cout << "\nProduct of all values of an array : " << product;
}

void swapBetweenMinAndMax(int a[], int n) {
    int sm = 0;
    int lg = 0;

    for(int i=1; i<n; i++) {
        if(a[i] < a[sm]) 
            sm = i;
        if(a[i] > lg)
            lg = i;
    }
    int temp = a[sm];
    a[sm] = a[lg];
    a[lg] = temp;

    cout << "\nAfter swapping : ";
    for(int i=0; i<n; i++)
        cout << "\t" << a[i];
}

void uniqueValues(int a[], int n) {
    int res = 0;
    for(int i=0; i<n; i++) {
       res = res ^ a[i];
    }
    cout << "\nUnique value is : " << res;
}

void arrayIntersection(int a[], int n) {
    int b[5] = { 2,4,8,9,0};

    cout << "\nIntersectd elements : ";
    for(int i=0; i<n; i++)
        for(int j=0; j<5; j++)
            if(a[i] == b[j])
                cout << "\t" << a[i];
}

int main() {
    int a[9] = { 1,2,3,1,2,3,4,5,4 };
    arrayIntersection(a, 9);
}