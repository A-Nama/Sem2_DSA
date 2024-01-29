#include<iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** data;

public:
    Matrix(int rows, int cols){
        this->rows=rows;
        this->cols=cols;
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    friend istream& operator>>(istream& in, Matrix& matrix) {
        cout << "Enter values for the matrix:" << endl;
        for (int i = 0; i < matrix.rows; i++) {
            for (int j = 0; j < matrix.cols; j++) {
                in >> matrix.data[i][j];
            }
        }
        return in;
    }

    friend ostream& operator<<(ostream& out, const Matrix& matrix) {
        for (int i = 0; i < matrix.rows; i++) {
            for (int j = 0; j < matrix.cols; j++) {
                out << matrix.data[i][j] << " ";
            }
            out << endl;
        }
        return out;
    }

    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            cout << "Matrix dimensions do not match for addition!" << endl;
            exit(1);
        }

        Matrix result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            cerr << "Incompatible matrix dimensions for multiplication!" << endl;
            exit(1);
        }

        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }
};

