#include <iostream>
using namespace std;

template<class T>
bool equalArrays(T x [], T y [], int size) {
    bool is_true = false;
    for(int i=0;i<size;i++) {
        if(x[i]==y[i]) is_true = true;
        else is_true = false;
    }
    return is_true;
}

int main() {
    int x[] = {1, 10, 100, 5, 4};
    int y[] = {1, 10, 100, 5, 4};
    if(equalArrays(x,y,5)) cout << "같다";
    else cout << "다르다";
}