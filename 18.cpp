// sum of two marices
#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (r1 != r2 || c1 != c2) {
        cout << "Error! Matrices must have the same dimensions to add." << endl;
        return 1;
    }

    int matrix1[r1][c1], matrix2[r2][c2], sum[r1][c1];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> matrix1[i][j];

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> matrix2[i][j];

    // Adding the two matrices
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    cout << "Sum of the two matrices:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}