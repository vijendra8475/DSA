#include<iostream>
#include<vector>
using namespace std;

void linearSearchOnVector(vector<char> &a, int n) {
    int pos = 0;
    for(int z : a){
        if( z == n )
            cout << "\nItem " << n << " is present in vector at " << pos;
        pos++;
    }
}

void linearSearchOnVector(vector<char> &a, char n) {
    int pos = 0;
    for(char z : a){
        if( z == n )
            cout << "\nItem " << n << " is present in vector at " << pos;
        pos++;
    }
}

int main() {
    // first method to declear vector
    vector<int> a;
    a.push_back(5);

    // second method to declear vector while assignning some values
    vector<int> b = {1,2,3,4};

    // third method
    vector<int> c(3,0); // 3 will be size and 0 means vector will fill with all zero values

    
    // loop in vector
    for(int i : c) {
        cout << "\t" << i;
    }
    
    // new vector for char
    vector<char> z = { 'a', 'b', 'c', 'd' };
    for(char a : z) 
    cout << "\t" << a;
    
    
    //  vector functions 
    cout << "\nSize of c vector : " << c.size();
    c.push_back('z'); // for pushing a new element into vector
    c.pop_back(); // for poping an element from vector
    cout << "\nCapacity : " << c.capacity();
    cout << "\nFront element in c vector : " << c.front();
    cout << "\nBack element in c vector : " << c.back();
    cout << "\nElement at specific position : " << c.at(2);

    linearSearchOnVector(z, 'c');
}