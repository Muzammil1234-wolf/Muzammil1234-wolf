//without using vector templates

#include <iostream>
using namespace std;

void printMatrix(int matrix[][2], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int matrix1[][2], int matrix2[][2], int result[][2], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[2][2] = {
        {1, 2},
        {4, 5}
    };
    
    int matrix2[2][2] = {
        {5, 4},
        {2, 1}
    };
    
    int result[2][2];

    cout << "Matrix 1:" << endl;
    printMatrix(matrix1, 2, 2);
    
    cout << "Matrix 2:" << endl;
    printMatrix(matrix2, 2, 2);

    addMatrices(matrix1, matrix2, result, 2, 2);

    cout << "Resultant Matrix (Addition):" << endl;
    printMatrix(result, 2, 2);

    return 0;
}
