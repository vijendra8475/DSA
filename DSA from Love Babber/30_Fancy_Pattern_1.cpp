#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int t = 4 * (n - 1), h = t / 2;
    for (int i = 0; i < n; i++)
    {
        int stNumIndex = h - i;
        int numCount = i+1;
        for (int j = 0; j < t; j++)
        {
            if (j == stNumIndex && numCount > 0)
            {
                cout << i+1;
                numCount--;
                stNumIndex += 2;
            }
            else
                cout << "*";
        }
        cout << endl;
    }
}