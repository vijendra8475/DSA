#include <iostream>
using namespace std;
int main()
{
    int n = 7;

    for (int i = 0; i < n; i++)
    {
        int c = i <= n / 2 ? 2 * i : 2*(n-i-1);

        int num = 1;
        for (int j = 0; j <= c; j++)
        {
            if (j <= c/ 2)
                cout << num++;
            else
                cout << c-j+1;
        }
        cout << endl;
    }
}