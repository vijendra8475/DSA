#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    vector<int> a = {3, -4, 5, 4, -1, 7, -8};
    int maxm = INT8_MIN;
    int curr = 0;
    for (int i = 0; i < a.size(); i++)
    {
        curr += a[i];
        maxm = max(curr, maxm);

        if (curr + a[i] < 1)
            curr = 0;
    }

    cout << "\nMaximum subarray : " << maxm;
}