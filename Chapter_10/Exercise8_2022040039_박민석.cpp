#include <iostream>
using namespace std;

template <class TYPE>
TYPE equals(TYPE x, int y)
{
    if(x==y) return true;
    else return false;
}