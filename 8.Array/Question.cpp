#include <iostream>
using namespace std;
void smallestAndLargest(int a[])
{
    int sml = INT16_MAX;
    int lrg = INT16_MIN;

    for (int i = 0; i < 6; i++)
    {
        sml = min(sml, a[i]);
        lrg = max(lrg, a[i]);
    }

    cout << "\nSmallest : " << sml;
    cout << "\nLargest : " << lrg;
}

void linearSearch(int a[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(target == a[i]) {
            cout << "\nTargeted item is in position : "  << i+1;
            return;
        }
    }
    cout << "\nTargeted Item is not in list";
}

void reverseArray(int a[], int size) {
    int st = 0, end = size-1;
    while (st < end)
    {
        int temp = a[st];
        a[st] = a[end];
        a[end] = temp;
        st++;
        end--;
    }

    cout << "\nReverse Array : ";
    for(int i=0; i<size; i++)
        cout << "\t" << a[i];
}

int main()
{
    int a[6] = {2, 4, 6, 1, 8, 10};
    reverseArray(a, 6);
}