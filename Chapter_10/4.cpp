#include <iostream>
using namespace std;

template<class T>
bool search(T target, T* x, int size) {
    bool is_true=false;
    for(int i=0;i<size;i++) {
        if(x[i]==target) {
            is_true = true;
        }
    }
    return is_true;
}

int main() {
    int x[] = {1,10,100,5,4};
    if(search(100, x, 5)) cout << "100이 배열 x에 포함되어 있다.";
    else cout << "100이 배열 x에 포함되어 있지 않다.";
}