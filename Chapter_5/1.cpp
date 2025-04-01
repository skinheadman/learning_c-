#include <iostream>
using namespace std;

class Circle
{
    int radius;
    public :
    Circle() { radius = 1; }
    double getArea() { return 3.14*radius*radius; }
    void setRadius(int radius) { this->radius=radius; };
};

void swap(Circle &c1, Circle &c2)
{
    Circle tmp;
    tmp=c1;
    c1=c2;
    c2=tmp;
}

int main()
{
    int radius;
    Circle donut;
    Circle pizza;

    cin >> radius;
    donut.setRadius(radius);
    cin >> radius;
    pizza.setRadius(radius);

    cout << donut.getArea() << " " << pizza.getArea() << "\n";
    swap(donut,pizza);

    cout << donut.getArea() << " " << pizza.getArea() << "\n";
}

