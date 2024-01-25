#include<iostream>
using namespace std;

class Matrix {
public:
    int rows, cols;
    int** data;

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

    Matrix operator+(const Matrix& other){
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

    void inputMatrix() {
        cout << "Enter values for the matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    void displayMatrix() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int r1,r2,c1,c2;

    cout << "Matrix A:" << endl;
    cout<<"Enter number of rows: "<<endl;
    cin>>r1;
    cout<<"Enter number of columns: "<<endl;
    cin>>c1;
    Matrix A(r1, c1);
    A.inputMatrix();

    cout << "Matrix B:" << endl;
    cout<<"Enter number of rows: "<<endl;
    cin>>r2;
    cout<<"Enter number of columns: "<<endl;
    cin>>c2;
    Matrix B(r2, c2);
    B.inputMatrix();

    Matrix C = A + B;
    cout << "Matrix A + B:" << endl;
    C.displayMatrix();

    Matrix D = A * B;
    cout << "Matrix A * B:" << endl;
    D.displayMatrix();

}
