#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
void shiftNegativesToLast(int *a, int n)
{
    int end = n - 1;
    int st = 0;

    // my approach
    // while (st <= end)
    // {
    //     while (a[end] < 0)
    //     {
    //         end--;
    //     }
    //     if(a[st] < 0) {
    //         cout << "\nswapped st : " << a[st] << " end : " << a[end];
    //         int temp = a[st];
    //         a[st] = a[end];
    //         a[end] = temp;
    //         st++;
    //         end--;
    //     }
    //     else
    //         st++;
    // }

    // another Approach
    while (st < end)
    {
        if(a[end] < 0)
            end--;
        else if(a[st] < 0) {
            swap(a[st], a[end]);
            st++; end--;
        }
        else if(a[st] >= 0)
            st++;
    }
    

    // Lecture's Approach
    // for(int i=0; i<n; i++) {
    //     if(a[n-i] < 0) {
    //         swap(a[n-i], a[end]);
    //         end--;
    //     }
    // }
}

void rotateArray(vector<int> &a,int n) {
    int end = a.size();

    while(n) {
        swap(a[n], a[end]);
        n--;
        end--;
    }
    
}

void printArray(int *a, int n) {
    cout << "\nPrinting Array : ";
    for(int i=0; i<n; i++)
        cout << " " << a[i];
}

int main()
{
    int a[] = {23, -7, -4,-6,-3,2,-99,4,5,3,-4, 23, -5, 23, 2, 1, -4};
    int n = 17;

    printArray(a, n);
    shiftNegativesToLast(a, n);
    printArray(a, n);
}