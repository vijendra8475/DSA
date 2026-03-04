#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {3, -4, 5, 4, -1, 7, -8};
    int max = 0;

    for (int i = 0; i < a.size(); i++)
    {
        int curr = 0;
        for (int j = i; j < a.size(); j++)
        {
            curr += a[j];
            if (max < curr)
                max = curr;
        }
        cout << "\t";
    }
    cout << "\nMaximum subarray : " << max;
}