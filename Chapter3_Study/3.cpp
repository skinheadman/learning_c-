#include <iostream>
using namespace std;

class Account
{
    string name;
    int id;
    int money;
    public:
    Account(string name, int id, int balance);
    void deposit(int money);
    string getOwner() { return name; }
    int inquiry() { return money; }
    int withdraw(int money);
};

Account::Account(string name, int id, int balance)
{
    this->name = name;
    this->id = id;
    money = balance;
}

void Account::deposit(int money)
{
    this->money += money;
}

int Account::withdraw(int money)
{
    this->money -= money;
    return this->money;
}

int main()
{
    Account a("kitae",1,5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << "\n";
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << "\n";
}