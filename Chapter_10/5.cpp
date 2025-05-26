#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
    int size = sizea + sizeb;
    T* array = new T [size];
    for(int i=0;i<size;i++) {
        if(i<sizea) {
            array[i] = a[i];
        }
        else {
            array[i] = b[i-sizea];
        }
    }
    return array;
}

int main() {
    int a[] = {1,2,3,4};
    int sizea = 4;
    int b[] = {5,6,7,8};
    int sizeb = 4;
    auto array = concat(a, sizea, b, sizeb);
    for(int i=0;i<8;i++) {
        cout << array[i] << ' ';
    }
}