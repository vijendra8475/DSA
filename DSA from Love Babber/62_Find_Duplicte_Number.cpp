#include <iostream>
#include <vector>
using namespace std;

void findDuplicateNumber(vector<int> &a)
{
    int n = a.size();

    vector<int> d(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (d[a[i]] == 0)
            d[a[i]] = 1;
        else
            cout << "\nDuplicate : " << a[i];
    }
}

void another(vector<int> &a)
{
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        int idx = a[i] > 0 ? a[i] : -a[i];
        if (a[idx] > 0)
            a[idx] = -a[idx];
        else
            cout << "\n"
                 << idx;
    }
}

int main()
{
    vector<int> a = {1, 3, 4, 4, 2};
    another(a);
}