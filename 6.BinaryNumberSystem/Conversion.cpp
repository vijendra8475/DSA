#include <iostream>
#include <string>
using namespace std;
long long decimalToBinary(int n)
{
    int ans = 0;
    while (n)
    {
        ans *= 10;
        ans += n % 2;
        n /= 2;
    }
    return ans;
}

int binaryToDecimal(long long n)
{
    int ans = 0;
    int pow = 1;

    while (n)
    {
        ans += pow * (n % 10);
        pow *= 2;
        n /= 10;
    }
    return ans;
}

int decimalToOctal(int n)
{
    int ans = 0;
    int pow = 1;

    while (n)
    {
        int ans2 = n % 8;
        ans += ans2 * pow;
        pow *= 10;
        n /= 8;
    }
    return ans;
}

int octalToBinary(int n)
{
    int ans = 0;
    int pow = 1;

    while (n)
    {
        int ans2 = n % 10;
        ans += ans2 * pow;
        n /= 10;
        pow *= 8;
    }
    return ans;
}

string decimalToHexadecimal(int n)
{
    string ans = "";

    while (n)
    {
        int ans2 = n % 16;
        if (ans2 < 10)
            ans += to_string(ans2);
        else
        {
            switch (ans2)
            {
            case 10:
                ans += "A";
                break;
            case 11:
                ans += "B";
                break;
            case 12:
                ans += "C";
                break;
            case 13:
                ans += "D";
                break;
            case 14:
                ans += "E";
                break;
            case 15:
                ans += "F";
                break;

            default:
                break;
            }
        }
        n /= 16;
    }
    return ans;
}

int main()
{
    cout << "\nBinary of 5 : " << decimalToHexadecimal(128);
}