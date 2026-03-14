#include <iostream>
#include <vector>
using namespace std;
vector<int> BruteForce(vector<int> &a, int target)
{
    vector<int> ans;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] + a[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int target = 9;
    vector<int> ans = BruteForce(a, target);

    cout << "\nAnswer : ";
    for (int i : ans)
        cout << "\t" << i;
}