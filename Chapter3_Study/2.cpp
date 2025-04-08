#include <iostream>
using namespace std;

class Date
{
    int year;
    int month;
    int day;
    string birth;
    public :
    Date(int y, int m, int d);
    Date(string b);
    void show();
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }
};

Date::Date(int y, int m, int d)
{
    year=y;
    month=m;
    day=d;
}

Date::Date(string b)
{
    int pos = b.find('/');
    year = stoi(b.substr(0,pos));
    b=b.substr(pos+1);
    pos = b.find('/');
    month = stoi(b.substr(0,pos));
    b=b.substr(pos+1);
    day = stoi(b);
}

void Date::show()
{
    cout << year << "년" << month << "월" << day << "일" << "\n";
}

int main()
{
    Date birth(2014,3,20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << "\n";
}

