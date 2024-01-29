#include<iostream>
using namespace std;
#include"matrixop.h"

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns for Matrix 1: ";
    cin >> rows >> cols;
    Matrix matrix1(rows, cols);
    cin >> matrix1;

    cout << "Enter number of rows and columns for Matrix 2: ";
    cin >> rows >> cols;
    Matrix matrix2(rows, cols);
    cin >> matrix2;

    cout << "Matrix 1:" << endl;
    cout << matrix1;

    cout << "Matrix 2:" << endl;
    cout << matrix2;

    Matrix sum = matrix1 + matrix2;
    cout << "Sum of matrices:" << endl;
    cout << sum;

    Matrix product = matrix1 * matrix2;
    cout << "Product of matrices:" << endl;
    cout << product;

    return 0;
}