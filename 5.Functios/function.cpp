#include<iostream>
using namespace std;

int sumOfDigitOfN(int n) {
    int ans = 0;
    while (n)
    {
        ans += n%10;
        n /= 10;
    }

    return ans;
}

int fact(int n) {
    int ans = 1;
    for(int i=0; i<n; i++) {
        ans *= i+1;
    }
    return ans;
}


int bionomialCofficient(int n, int r) {
    int ans = fact(n)/(fact(r) * fact(n-r));
    return ans;
}

int main() {
    int res = bionomialCofficient(8, 2);
    cout << "\nAnswer for 123 : " << res;
}