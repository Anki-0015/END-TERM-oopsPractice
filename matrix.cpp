#include <iostream>
using namespace std;

class Matrix {
private:
    int m, n;
    int a[20][20];

public:
    // Constructor to initialize matrix with given dimensions
    Matrix(int x, int y) : m(x), n(y) {
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                a[i][j] = 0;
    }

    // Method to read the matrix values
    void readmat() {
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
    }

    // Overloaded + operator to add two matrices
    Matrix operator+(const Matrix& other) {
        Matrix result(m, n);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                result.a[i][j] = a[i][j] + other.a[i][j];
        return result;
    }

    // Method to display the matrix
    void display() const {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix mat1(2, 2), mat2(2, 2);

    cout << "Enter elements for Matrix 1:" << endl;
    mat1.readmat();

    cout << "Enter elements for Matrix 2:" << endl;
    mat2.readmat();

    Matrix sum = mat1 + mat2;  // Add the matrices

    cout << "Matrix 1:" << endl;
    mat1.display();

    cout << "Matrix 2:" << endl;
    mat2.display();

    cout << "Sum of Matrix 1 and Matrix 2:" << endl;
    sum.display();

    return 0;
}
