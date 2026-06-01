#include<iostream>
using namespace std;

template <sigset_t C>
void printArray(int a[][C], int r, int c) {
    cout << "\n2D Array : " << endl;
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void columnWisePrint(int a[][2], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }
}

void inputArray(int a[][2], int r, int c) {
    cout << "\nEnter Inputs for Array : " << endl;
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cout << "Enter input for row : " << i << " and column : " << j << "  :: ";
            cin >> a[i][j];
        }
        cout << endl;
    }

}

void findTarget(int b[][2], int r, int c) {
    int target;

    cout << "\nEnter Target : ";
    cin >> target;

    cout << "\nFinding target...";

    for(int i=0; i<r; i++) 
        for(int j=0; j<c; j++)
            if(b[i][j] == target)
                cout << "\nTarget found at row : " << i << "  column : " << j;
}

void findMax(int b[][2], int r, int c) {
    int max = INT16_MIN;

    cout << "\nFinding Max element...";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            if(b[i][j] > max)
                max = b[i][j];

    cout << "\nMax element from Array is : " << max << endl;
}

void findMin(int b[][2], int r, int c) {
    int min = INT16_MAX;

    cout << "\nFinding Min element...";
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            if(b[i][j] < min)
                min = b[i][j];

    cout << "\nMin element from Array is : " << min << endl;
}

void printSumOfEachRow(int b[3][2], int r, int c) {
    cout << "\nPrinting Sum of Each Row : " << endl;

    for(int i=0; i<r; i++) {
        int sum = 0;

        for(int j=0; j<c; j++) {
            cout << b[i][j] << " ";
            sum += b[i][j];
        }

        cout << "\tSum : " << sum;

        cout << endl;
    }
}

void swapColumnsAndRowsUsingAnotherArray(int b[][2], int r, int c) {
    int a[2][3];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            a[j][i] = b[i][j];
    
    printArray(a, c, r);
}

int main() {
    // int a[3][2] = {{1,2}, {3,4}, {5,6}};
    // columnWisePrint(a, 3, 2);
    int b[3][2];
    inputArray(b, 3, 2);
    printArray(b, 3, 2);

    // findTarget(b, 3, 2);
    // findMax(b, 3, 2);
    // findMin(b, 3, 2);
    // printSumOfEachRow(b, 3, 2);

    swapColumnsAndRowsUsingAnotherArray(b, 3, 2);

}