/* 5��
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random
{
private:
	int r;
public:
	Random();
	int next();
	int nextInRange(int min, int max);
};

Random::Random()
{
}

int Random::next()
{	
	//srand((unsigned)time(0));
	int r = rand();
	return r;
}

int Random::nextInRange(int min, int max)
{
	int r = rand() % (max - min + 1) + min;
	return r;
}

int main()
{
	Random r;
	cout << "--0����" << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}

	//Random r1(2,6);
	cout << endl << endl << "--2����" << "4 ������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}

	cout << endl;

}
*/
/*
#include <iostream>
using namespace std;

#include "Exp.h"

int main()
{
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a�� ���̽� " << a.getBase() << "," << "���� " << a.getExp() << endl;

	if (a.equals(b))
	{
		cout << "same";
	}
	else
		cout << "not same";
}
*/
// 1��
//#include <iostream>
//using namespace std;
//
//class Tower
//{
//public :
//	int Height;
//	Tower(int h = 1) { Height = h; }
//	int getHeight();
//	
//};
//
//int Tower::getHeight()
//{
//	return Height;
//}
//
//int main()
//{
//	Tower myTower;
//	Tower seoulTower(100);
//	cout << "���̴� " << myTower.getHeight() << "����" << endl;
//	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
//}
//4��
//#include <iostream>
//using namespace std;
//
//class CoffeeMachine
//{
//public:
//	int Sugar;
//	int Water;
//	int Coffee;
//	CoffeeMachine(int c, int w, int s)
//	{	
//		Coffee = c;
//		Water = w;
//		Sugar = s;
//	}
//	void drinkEspresso()
//	{
//		Coffee -= 1;
//		Water -= 1;
//	}
//	void drinkAmericano()
//	{
//		Coffee -= 1;
//		Water -= 2;
//	}
//	void drinkSugarCoffee()
//	{
//		Coffee -= 1;
//		Water -= 2;
//		Sugar -= 1;
//	}
//	int fill();
//	int show();
//};
//
//int CoffeeMachine::fill()
//{
//	Sugar = 10;
//	Water = 10;
//	Coffee = 10;
//	return 1;
//}
//
//int CoffeeMachine::show()
//{
//	cout << "Ŀ�� �ӽ� ����, " << " Ŀ��:" << Coffee << "	��:" << Water << "	����:" << Sugar << endl;
//	return 1;
//}
//
//int main()
//{
//	CoffeeMachine java(5, 10, 3);
//	java.drinkEspresso();
//	java.show();
//	java.drinkAmericano();
//	java.show();
//	java.drinkSugarCoffee();
//	java.show();
//	java.fill();
//	java.show();
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Date
//{
//private :
//	int Year, Month, Day;
//public :
//
//	Date(string s) 
//	{
//		size_t pos1 = s.find('/');
//		size_t pos2 = s.find('/', pos1 + 1);
//
//		Year = stoi(s.substr(0, pos1));
//		Month = stoi(s.substr(pos1 + 1, pos2));
//		Day = stoi(s.substr(pos2 + 1));
//		
//	};
//	Date(int y, int m, int d)
//	{
//		Year = y;
//		Month = m;
//		Day = d;
//	};
//	int getYear();
//	int getMonth();
//	int getDay();
//	int show();
//};
//
//int Date::getYear()
//{
//	cout << Year;
//	return 1;
//}
//
//int Date::getMonth()
//{
//	cout << Month << endl;
//	return 1;
//}
//
//int Date::getDay()
//{
//	cout << Day << endl;
//	return 1;
//}
//
//int Date::show()
//{
//	cout << Year << "��" << Month << "��" << Day << "��" << endl;
//	return 1;
//}
//
//int main()
//{
//	Date birth(2014, 3, 20);
//	Date independenceDay("1945/8/15");
//	independenceDay.show();
//	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
//}
//
//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//class Account
//{
//private :
//	string h_name;
//	int accout_id, balance;
//public :
//	Account(string name, int a_id, int b_num) 
//	{
//		h_name = name;
//		accout_id = a_id;
//		balance = b_num;
//	}
//	string getOwner() // �׳� ���ڿ� ����
//	{
//		return h_name;
//	}
//	int deposit(int a);
//	int withdraw(int num);
//	int inquiry() { return balance; }
//};
//
//int Account::deposit(int a)
//{
//	balance += a;
//	return balance;
//}
//
//int Account::withdraw(int num)
//{
//	balance -= num;
//	return balance;
//}
//
//int main()
//{
//	Account a("kitae", 1, 5000);
//	a.deposit(50000);
//	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
//	int money = a.withdraw(20000);
//	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
//
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Integer
//{
//private :
//	int r;
//public :
//	Integer(int n) { r = n; }
//	Integer(string s) { r = stoi(s); }
//	inline int get()
//	{
//		return r;
//	}
//	inline void set(int n)
//	{
//		r = n;
//	}
//	inline int isEven()
//	{
//		if (r % 2 == 0)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//int main()
//{
//	Integer n(30);
//	cout << n.get() << ' ';
//	n.set(50);
//	cout << n.get() << ' ';
//
//	Integer m("300");
//	cout << m.get() << ' ';
//	cout << m.isEven();
//}
// 9��
//#include <iostream>
//using namespace std;
//
//class Oval
//{
//public :
//	int width, height;
//	Oval(int w, int h);
//	Oval();
//	~Oval();
//	int getWidth();
//	int getHeight();
//	int set(int w, int h);
//	void show();
//};
//
//Oval::Oval(int w, int h)
//{
//	width = w;
//	height = h;
//}
//
//Oval::Oval()
//{
//	width = 1;
//	height = 1;
//}
//
//Oval::~Oval()
//{
//	cout << "Oval �Ҹ� : width = " << width << ", height = " << height << endl;
//}
//
//int Oval::getWidth() { return width; }
//
//int Oval::getHeight() { return height; }
//
//int Oval::set(int w, int h)
//{
//	width = w;
//	height = h;
//	return 0;
//}
//
//void Oval::show()
//{
//	cout << "width = " << width << ", height = " << height << endl;
//}
//
//int main()
//{
//	Oval a, b(3, 4);
//	a.set(10, 20);
//	a.show();
//	cout << b.getWidth() << "," << b.getHeight() << endl;
//}

#include <iostream>
using namespace std;

class Common
{
private:
	int a, b;
public :
	void setValue(int x, int y);
};

class Add
{
private:
	int a, b;
public :
	Add();
	void setValue(int x, int y);
	int calculate();
};

class Sub
{
private:
	int a, b;
public:
	Sub();
	void setValue(int x, int y);
	int calculate();

};

class Mul
{
private:
	int a, b;
public:
	Mul();
	void setValue(int x, int y);
	int calculate();
};

class Div
{
private:
	int a, b;
public:
	Div();
	void setValue(int x, int y);
	int calculate();
};

void Add::setValue(int x, int y)
{
	a = x;
	b = y;
	return;
}

int Add::calculate()
{
	return a + b;
}