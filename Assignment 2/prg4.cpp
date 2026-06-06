#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows : ";
    cin >> rows ;
    cout <<"Enter number of columns : " ;
    cin>> cols ; 

    if (rows != cols) {
        cout << "Error: Matrix must be square (no of rows = no of cols) to have diagonals." << endl;
        return 0;
    }

    int n = rows;
    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<"Enter a Number :" ;
            cin >> matrix[i][j];
        }
    }
    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - 1 - i];
    }

    int difference = abs(primarySum - secondarySum);

    cout << "\nPrimary Diagonal Sum: " << primarySum;
    cout << "\nSecondary Diagonal Sum: " << secondarySum;
    cout << "\nAbsolute Difference: " << difference << endl;

    return 0;
}
