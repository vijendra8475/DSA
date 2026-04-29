#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    // first not successed approach
    // int z = 0;
    // int c;
    // for (int i = 0; i < 2*n; i++)
    // {

    //     if (i < n)
    //     {
    //         c = 2*i+1;
    //     }
    //     else
    //     {
    //         c = 2*(n - (i % n) - 1) +1;
    //         z = (c-1);
    //     }

    //     for (int j = 0; j < c; j++)
    //     {
    //         if (j % 2 == 0)
    //         cout << ++z;
    //         else
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // video's approach
    int z = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
            if (j % 2 == 0)
                cout << z++;
            else
                cout << "*";
        cout << endl;
    }

    int num = z - n;
    for (int i = 0; i < n; i++)
    {
        int k = num;
        for (int j = 0; j < (2 * n) - (2 * i) - 1; j++)
            if (j % 2 == 0)
                cout << k++;
            else
                cout << "*";
        num = num - (n - i - 1);
        cout << endl;
    }
}