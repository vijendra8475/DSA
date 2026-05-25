#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &a)
{
    int n = a.size();
    int o = 0, z = 0, t = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            z++;
        else if (a[i] == 1)
            o++;
        else
            t++;

        a.clear();
    }

    for (int i = 0; i < n; i++)
    {
        if (z)
        {
            a.push_back(0);
            z--;
        }
        else if (o)
        {
            a.push_back(1);
            o--;
        }
        else
        {
            a.push_back(2);
            t--;
        }
    }
}

// using 3 pointer approach
void sortColorsUsing3Pointer(vector<int> &a){
    int l = 0, m = 0, h = a.size()-1;

    while (m < h)
    {
        if(a[m] == 0) {
            swap(a[m], a[l]);
            m++;
            l++;
        }
        else if(a[m] == 1) {
            m++;
        }
        else {
            swap(a[m], a[h]);
            h--;
        }
    }
    
}

int main()
{
    vector<int> a = {0, 1, 1, 2, 1, 2, 0};
    sortColorsUsing3Pointer(a);

    cout << "\nArray : ";
    for (int i = 0; i < a.size(); i++)
        cout << " " << a[i];
}