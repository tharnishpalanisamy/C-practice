#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter number of rows for first matrix: ";
    cin >> r1 ;
    cout << "Enter number of columns for first matrix: ";
    cin >>  c1;
    cout << "Enter number of rows for Second matrix: ";
    cin >> r2 ;
    cout << "Enter number of columns for Second matrix: ";
    cin >>  c2;

    if (c1 != r2) {
        cout << "Multiplication not possible!";
        return 0;
    }
    vector<vector<int>> A(r1, vector<int>(c1));
    vector<vector<int>> B(r2, vector<int>(c2));
    vector<vector<int>> C(r1, vector<int>(c2, 0));  

    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resulting Matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
