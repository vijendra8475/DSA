#include <iostream>
#include <vector>
using namespace std;
vector<int> BetterApproach(vector<int> &a, int target)
{
    vector<int> ans;
    int st = 0;
    int end = a.size()-1;
    
    while (a[st] + a[end] != target){
        int t = a[st] + a[end];
        if(t > target)
            end--;
        else if(t < target)
            st++;
    }
    ans.push_back(st);
    ans.push_back(end);
    return ans;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int target = 9;
    vector<int> ans = BetterApproach(a, target);

    cout << "\nAnswer : ";
    for (int i : ans)
        cout << "\t" << i;
}