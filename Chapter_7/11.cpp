#include <iostream>
#include <vector>
using namespace std;

class Stack {
    int buf[100];
    int top=0;
    public:
    Stack() {}
    Stack& operator<<(int x) {
        buf[top++]=x;
        return *this;
    }
    Stack& operator>>(int& x) {
        if(top>0) x = buf[--top];
        return *this;
    }
    bool operator!() {
        if(top==0) return true;
        else return false;
    }
};

int main() {
    Stack stack;
    stack << 3 << 5 << 10;
    while(true) {
        if(!stack) break;
        int x;
        stack>>x;
        cout << x << " ";
    }
    cout << endl;
}