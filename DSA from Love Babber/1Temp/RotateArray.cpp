#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &a);

void rotateArray(vector<int> &a, int n)
{
    vector <int> m(a.size());
    for(int i=0; i<a.size(); i++) {
        int newIndex = (i + n) % a.size();
        m[newIndex] = a[i];
    }
    a = m;
}

void print(vector <int> &a) {
    cout << "\nPrinting Array : ";
    for(auto i : a)
        cout << " " << i;
}

int main()
{
    vector<int> a = {1,2,3,4,5,6,7};
    print(a);
    rotateArray(a, 3);
    print(a);
}