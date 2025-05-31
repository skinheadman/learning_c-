#include <iostream>
using namespace std;

class Matrix {
    int array[4];
public :
    Matrix();
    Matrix(int a1, int a2, int a3, int a4);
    void show();
    Matrix& operator << (int* array);
    Matrix& operator >> (int* array);
};

Matrix::Matrix() {
}

Matrix::Matrix(int a1, int a2, int a3, int a4) {
    array[0] = a1;
    array[1] = a2;
    array[2] = a3;
    array[3] = a4;
}

void Matrix::show() {
    cout << "Matrix = { ";
    for (int i=0;i<4;i++) {
        cout << array[i] << " ";
    }
    cout << "}";
}

Matrix& Matrix::operator<<(int* array) {
    for(int i=0;i<4;i++) {
        this->array[i] = (*array++);
    }
}

Matrix& Matrix::operator>>(int* array) {
    for(int i=0;i<4;i++) {
        (*array++) = this->array[i];
    }
}

int main() {
    Matrix a(4,3,2,1), b;
    int x[4], y[4] = {1,2,3,4};
    a >> x;
    b << y;

    for(int i=0;i<4;i++) {
        cout << x[i] << ' ';
    }
    cout << endl;
    b.show();
}