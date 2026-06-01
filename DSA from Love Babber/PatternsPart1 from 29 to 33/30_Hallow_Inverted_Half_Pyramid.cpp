#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < n; j++)
            if (i == 0 || j == n-1 || j == i)
                cout << j + 1 << " ";
            else
                cout << "  ";
        cout << endl;
    }
}