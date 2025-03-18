/* 5번
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
	cout << "--0에서" << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}

	//Random r1(2,6);
	cout << endl << endl << "--2에서" << "4 까지의 랜덤 정수 10 개--" << endl;
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
	cout << "a의 베이스 " << a.getBase() << "," << "지수 " << a.getExp() << endl;

	if (a.equals(b))
	{
		cout << "same";
	}
	else
		cout << "not same";
}
*/
// 1번
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
//	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
//	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
//}
//4번
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
//	cout << "커피 머신 상태, " << " 커피:" << Coffee << "	물:" << Water << "	설탕:" << Sugar << endl;
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
//	cout << Year << "년" << Month << "월" << Day << "일" << endl;
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
//	string getOwner() // 그냥 문자열 선언
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
//	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
//	int money = a.withdraw(20000);
//	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
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
// 9번
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
//	cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
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