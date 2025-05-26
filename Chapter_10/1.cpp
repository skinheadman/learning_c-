#include <iostream>
using namespace std;

template <class T>
T biggest(T array [], int n) {
    T top = array[0];
    for(int i=0;i<n;i++) {
        if(top<array[i]) top = array[i];
    }
    return top;
}

int main() {
    int x[] = {1,10,100,5,4};
    cout << biggest(x,5) << endl;
}