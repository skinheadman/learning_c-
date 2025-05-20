#include <iostream>
using namespace std;

template<class T>
void insert(T a, T b[], int index)
{
    b[index]=a;
}

template <class TYPE>
bool equals(TYPE x, TYPE y)
{
    if(x==y) return true;
    else return false;
}