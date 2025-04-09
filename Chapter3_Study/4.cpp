#include <iostream>
using namespace std;

class CoffeeMachine
{
    int Coffee;
    int water;
    int sugar;
    public :
    CoffeeMachine(int Coffee, int water, int sugar);
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void show() { cout << "커피 머신 상태,  커피:" << Coffee << "\t"<< "물:" << water << "\t"<< "설탕:" << sugar<<"\n"; }
    void fill() { Coffee = 10 ; water = 10; sugar = 10; }
};

CoffeeMachine::CoffeeMachine(int Coffee, int water, int sugar)
{
    this->Coffee = Coffee;
    this->water = water;
    this-> sugar = sugar;
}

void CoffeeMachine::drinkEspresso()
{
    Coffee--;
    water--;
}

void CoffeeMachine::drinkAmericano()
{
    Coffee--;
    water = water-2;
}

void CoffeeMachine::drinkSugarCoffee()
{
    Coffee--;
    water = water-2;
    sugar--;
}

int main()
{
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
}