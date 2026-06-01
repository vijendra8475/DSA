#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &a)
{
    int n = a.size();
    cout << "\nPrint array : ";
    for (int i = 0; i < n; i++)
        cout << " " << a[i];
}

void findPivotIndex(vector<int> &a)
{
    int n = a.size();
    vector<int> leftSum(n, 0), rightSum(n, 0);

    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        leftSum[i] = temp;
        temp += a[i];
    }

    temp = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        rightSum[i] = temp;
        temp += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (rightSum[i] == leftSum[i])
            cout << "\npivot : " << i;
        else
            cout << "\npivot : " << -1;
    }
}

int main()
{
    vector<int> a = {1, 7, 3, 6, 5, 6};
    findPivotIndex(a);
}