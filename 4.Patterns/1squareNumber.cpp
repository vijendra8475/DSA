#include <iostream>
using namespace std;
int main()
{

    // square Number pattern
    // for(int i=0; i<4; i++) {
    //     for(int j=0; j<4; j++)
    //         cout << j+1 << " ";
    //     cout << endl;
    // }

    // square number from 1 to 9
    // char n = 'A';
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++) {
    //         cout << n << " ";
    //         n++;
    //     }
    //     cout << endl;
    // }

    // right angle triangle pattern *
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<=i; j++)
    //         cout << "* ";
    //     cout << endl;
    // }

    // triangle pattern numeric ith
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<=i; j++)
    //         cout << i+1 << " ";
    //     cout << endl;
    // }

    //  triangle pattern jth
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<=i; j++)
    //         cout << j+1 << " ";
    //     cout << endl;
    // }

    // triangle reverse pattern jth
    // for(int i=0; i<4; i++){
    //     for(int j=i+1; j>0; j--)
    //         cout << j << " ";
    //     cout << endl;
    // }

    // flyod's triangle pattern
    // int n = 1;
    // for(int i=0; i<4; i++) {
    //     for(int j=0; j<=i; j++)
    //         cout << n++ << " ";
    //     cout << endl;
    // }

    // Inverted triangle pattern
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<i; j++)
    //         cout << "  ";
    //     for(int k=4; k>i; k--)
    //         cout << i+1 << " ";
    //     cout << endl;
    // }

    // pyramid pattern numeric
    // for(int i=0; i<4; i++) {
    //     for(int j=0; j<4-i-1; j++)
    //         cout << "  ";
    //     for(int j=0; j<=i; j++)
    //         cout << j+1 << " ";
    //     for(int j=0; j<i; j++)
    //         cout << j+1 << " ";
    //     cout << endl;
    // }

    // Hollow daimond pattern
    // for (int i = 0; i < 4; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < 4 - i - 1; j++)
    //         cout << "  ";
    //     cout << "* ";
    //     if (i != 0)
    //     {
    //         for (int j = 0; j < (2 * i) - 1; j++)
    //             cout << "  ";
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // // bottom part
    // for (int i = 0; i < 4 - 1; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //         cout << "  ";
    //     cout << "* ";
    //     if (i != 4 - 2)
    //     {
    //         for (int j = 0; j < 2 * (4 - 2 - i) - 1; j++)
    //             cout << "  ";
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // Butterfly pattern
    int n = 4;
    // top part
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)
            cout << "* ";
        for(int j=0; j<2*(n-i-1); j++)
            cout << "  ";
        for(int j=0; j<=i; j++)
            cout << "* ";
        cout << endl;
    }
    // bottom part
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++)
            cout << "* ";
        for(int j=0; j<2*i; j++)
            cout << "  ";
        for(int j=0; j<n-i; j++)
            cout << "* ";
        cout << endl;
    }
}