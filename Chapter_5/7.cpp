#include <iostream>
using namespace std;

class MyIntStack
{
    int p[10];
    int tos;
    public :
    MyIntStack() { tos =0; }
    bool push(int n);
    bool pop(int &n);
};

bool MyIntStack::push(int n)
{
    if(tos<10)
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
    if(tos==0)
    {
        return false;
    }
    else
    {
        tos--;
        n=p[tos];
        
        return true;
    }
}

int main()
{
    MyIntStack a;
    for(int i=0;i<11;i++)
    {
        if(a.push(i)) cout << i << ' ';
        else cout << "\n" << i+1 << " 번째 stack full" << "\n";
    }

    int n;
    for(int i=0;i<11;i++)
    {
        if(a.pop(n)) cout << n << ' ';
        else cout << "\n" << i+1 << " 번째 stack empty";
    }
    cout << "\n";
}