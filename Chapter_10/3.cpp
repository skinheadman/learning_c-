#include <iostream>
using namespace std;

template <class T>
void reverseArray(T* x, int size) {
    T sub;
    for(int i=0;i<size/2;i++) {
        sub = x[i];
        x[i] = x[size-i-1];
        x[size-i-1] = sub;
    }
}

int main() {
    int x[] = {1, 10, 100, 5, 4};
    reverseArray(x,5);
    for(int i=0;i<5;i++) cout << x[i] << ' ';
}