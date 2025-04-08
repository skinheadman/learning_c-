#ifndef EXP_H
#define EXP_H

class Exp
{
    int base;
    int exp;
    int value;
    public:
    Exp(int base = 1, int exp = 1);
    int getValue();
    int getBase();
    int getExp();
    bool equals (Exp b);
};

#endif