#ifndef EXP_H
#define EXP_H

class Exp
{
public:
	int basic_base, basic_index;
public:
	int num;
	Exp();
	Exp(int base);
	Exp(int base, int index);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);

};

#endif