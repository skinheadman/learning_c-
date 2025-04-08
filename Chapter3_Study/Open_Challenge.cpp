#include <iostream>
using namespace std;

#include "Exp.h"

int main()
{
    Exp a(3, 2);
    Exp b(9);
    Exp c;

    cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << "\n";
    cout << "a의 베이스" << a.getBase() << ',' << "지수 " << a.getExp() << "\n";

    if(a.equals(b))
    {
        cout << "same" << "\n";
    }
    else
    {
        cout << "not same" << "\n";
    }
}