#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 1,1,2,2};
    // int target = 9;
    vector<int> ans = BetterApproach(a);

    cout << "\nAnswer : ";
    for (int i : ans)
        cout << "\t" << i;
}