#include <iostream>
using namespace std;

class MyIntStack
{
    int *p;
    int size;
    int tos;
    public :
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack& s);
    ~MyIntStack();
    bool push(int n);
    bool pop(int &n);
};

MyIntStack::MyIntStack()
{
    size = 0;
    p = new int [size];
    for(int i=0;i<10;i++)
    {
        p[i] = 0;
    }
    tos = 0;
}

MyIntStack::MyIntStack(int size)
{
    this->size = size;
    p = new int [size];
    for(int i=0;i<size;i++)
    {
        p[i] = 0;
    }
    tos = 0;
}

MyIntStack::MyIntStack(const MyIntStack& s)
{
    this->size = s.size;
    p = new int [this->size];
    for(int i=0;i<this->size;i++)
    {
        this->p[i] = s.p[i];
    }
    this->tos = s.tos;
}

MyIntStack::~MyIntStack()
{
    delete [] p;
}


bool MyIntStack::push(int n)
{
    if(tos>=10) return false;
    p[tos++]=n;
    return true;
}

bool MyIntStack:: pop(int& n)
{
    if(tos<=0) return false;
    n = p[--tos];
    return true;
}

int main()
{
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;
    b.push(30);

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << "\n";
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << "\n";
}