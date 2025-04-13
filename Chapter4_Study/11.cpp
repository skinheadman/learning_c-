#include <iostream>
#include <string>
using namespace std;

class Container
{
    int size;
    public :
    Container() {size = 10;}
    void fill() {size = 10;}
    void consume() {size--;}
    int getSize() {return size;}
};

class CoffeeVendingMachine
{
    Container tong [3]; // tong[0] = coffee, tong[1] = water, tong[2] = sugar
    void fill();
    void selectEspresso(); 
    void selectAmericano();
    void selectSugarCoffee();
    void show();
    public:
    void run();
};

void CoffeeVendingMachine::fill()
{
    for(int i=0;i<3;i++)
    {
        tong[i].fill();
    }
}

void CoffeeVendingMachine::selectEspresso()
{
    tong[0].consume();
    tong[1].consume();
    for(int i=0;i<3;i++)
    {
        if(tong[i].getSize()<=0)
        {
            cout << "원료가 부족합니다."<<"\n";
            continue;
        }
    }
    cout << "에스프레소입니다. 맛있게드세요.";
}

void CoffeeVendingMachine::selectAmericano()
{
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    for(int i=0;i<3;i++)
    {
        if(tong[i].getSize()<=0)
        {
            cout << "원료가 부족합니다."<<"\n";
            continue;
        }
    }
    cout << "아메리카노입니다. 맛있게드세요.";
}

void CoffeeVendingMachine::selectSugarCoffee()
{
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    tong[2].consume();
    for(int i=0;i<3;i++)
    {
        if(tong[i].getSize()<=0)
        {
            cout << "원료가 부족합니다."<<"\n";
            continue;
        }
    }
    cout << "설탕커피입니다. 맛있게드세요.";
}