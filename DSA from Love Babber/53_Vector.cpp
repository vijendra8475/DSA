#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    cout << "\nPrinting vector : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << "\t" << v[i];
    }
}

void print2(vector<int> v) {
    cout << "\nPrinting vector : ";
    for(auto e : v)
        cout << "\t" << e;

}


int main()
{
    // vector : Data structure like array
    // decleration
    vector<int> v;

    //init with n size with specific data
    vector <int> v2(5,-1);
    vector <int> v3 = {1,2,3};
    vector <int> v4{5,6,7};

    // push some elements in it
    v = {1, 2, 3, 4, 5};
    // v.push_back(5);
    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(2);
    // v.push_back(1);

    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();

    cout << v.at(3);
    cout << "\nFront :" << v.front();
    cout << "\nBack : " << v.back();
    v.clear();
    print2(v);
}