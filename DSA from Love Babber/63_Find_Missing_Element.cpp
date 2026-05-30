#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &a)
{
    cout << "\nArray : ";
    for (int i = 0; i < a.size(); i++)
        cout << " " << a[i];
}

void findElement_visitingMethod(vector<int> &a)
{
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        int idx = a[i] > 0 ? a[i] - 1 : (-a[i]) - 1;

        if (a[idx] > 0)
            a[idx] = -a[idx];
    }

    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            cout << "\nFound Missing element : " << i + 1;
}

void findElement_sortingSwappingMethod(vector<int> &a)
{
    int n = a.size();

    
}

int main()
{
    vector<int> a = {1, 3, 3, 3, 1};
    findElement_sortingSwappingMethod(a);
    print(a);
}