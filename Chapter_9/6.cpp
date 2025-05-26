#include <iostream>
using namespace std;

class AbstractStack {
public:
    virtual bool push(int n) = 0;
    virtual bool pop(int& n) = 0;
    virtual int size() = 0;
};

class IntStack : public AbstractStack {
    int stack[3];
    int top=0;
public:
    bool push (int n) {
        if(top>3) return false;
        else {
            stack[top++] = n;
            return true;
        }
    }
    bool pop(int& n) {
        if(top<0) {
            return false;
        }
        else {
            n = stack[--top];
            return true;
        }
    }
    int size() {
        return top-1;
    }
};

int main() {
    IntStack num;
    
}