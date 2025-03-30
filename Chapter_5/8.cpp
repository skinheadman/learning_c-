#include <iostream>
using namespace std;

class MyIntStack
{
    int *p;
    int size;
    int tos;
    public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack& s);
    ~MyIntStack() { delete []p;}
    bool push(int n);
    bool pop(int &n);
};

MyIntStack::MyIntStack()
{
    tos=0;
    size =0;
    p=new int [size];
}

MyIntStack::MyIntStack(int size)
{
    this->size=size;
    tos = 0;
    p=new int [this->size];
}

MyIntStack::MyIntStack(const MyIntStack& s)
{
    this->size=s.size;
    this->p=new int [s.size];
    this->tos=s.tos;

    for(int i=0;i<s.size;i++)
    {
        this->p[i] = s.p[i];
    }
}

bool MyIntStack::push(int n)
{
    if(tos<size)
    {
        p[tos]=n;
        tos++;
        return true;
    }
    else
    {
        return false;
    }
}

bool MyIntStack::pop(int &n)
{
    if(tos>0)
    {
        tos--;
        n=p[tos];
        return true;
        
    }
    else
    {
        return false;
    }
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
    cout << "스택 b에서 팝한 값 "<< n << "\n";
}

