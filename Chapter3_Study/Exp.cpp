#include <iostream>
using namespace std;

#include "Exp.h"

Exp::Exp(int base, int exp)
{
    this->base = base;
    this->exp = exp;
}

int Exp::getBase()
{
    return base;
}

int Exp::getValue()
{
    int value = 1;
    for(int i=0;i<exp;i++)
    {
        value *= base;
    }
    this->value = value;
    return value;
}

int Exp::getExp()
{
    return exp;
}

bool Exp::equals(Exp b)
{
    int b_value = 0;
    b_value=b.getValue();
    if(value==b_value)
    {
        return true;
    }
    else
    {
        return false;
    }
}

