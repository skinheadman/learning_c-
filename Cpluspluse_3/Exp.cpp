#include "Exp.h"
using namespace std;

Exp::Exp()
{
	basic_base = 1;
	basic_index = 1;
}

Exp::Exp(int base)
{
	basic_base = base;
	basic_index = 1;
}

Exp::Exp(int base, int index)
{
	basic_base = base;
	basic_index = index;
}

int Exp::getValue()
{
	num = 1;
	for (int i = 0; i < basic_index; i++)
	{
		num *= basic_base;
	}

	return num;

}

int Exp::getBase()
{
	return basic_base;
}

int Exp::getExp()
{
	return basic_index;
}

bool Exp::equals(Exp b)
{
	int thisnum = this->getValue();
	int else_num = b.getValue();
	if (thisnum == else_num)
	{
		return true;
	}
	else return false;
}