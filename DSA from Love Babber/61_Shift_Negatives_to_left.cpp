#include <vector>
#include <iostream>
using namespace std;

void printArr(vector<int> a) {
    cout << "\nPrinting Array : ";
    for(int i=0; i<a.size(); i++)
        cout << " " << a[i];
}

void shiftNegativeToEnd(vector<int> &a)
{
    int n = a.size();
    int end = n - 1;
    int st = 0;

    while (st <= end)
    {
        if (a[end] < 0)
        {
            end--;
        }
        else if (a[st] < 0)
        {
            swap(a[st], a[end]);
            end--;
            st++;
        }
        else if (a[st] > -1)
        {
            st++;
        }
    }
}

int main()
{
    vector<int> a = {-2, -4, 3, 2, -1, 3, 2, 34 - 3, 4 - 23};
    shiftNegativeToEnd(a);
    printArr(a);
}