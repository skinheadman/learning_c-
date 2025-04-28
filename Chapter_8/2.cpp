#include <iostream>
using namespace std;

class Circle
{
    int radius;
    public :
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14*radius*radius; }
};

class NamedCirlce : public Circle
{
    string name;
    public :
    NamedCirlce(int radius = 0, string name = "피자")
    {
        this->name = name;
        setRadius(radius);
    }
    void show()
    {
        cout << "반지름이 " << getRadius() << "인 " << name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName() { return name; }
};

int main()
{
    NamedCirlce pizza[5];
    NamedCirlce max;
    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << "\n";
    int radius;
    string name;
    for(int i=0;i<5;i++)
    {
        cout << i+1 << ">>  ";
        cin >> radius >> name;
        pizza[i].setRadius(radius);
        pizza[i].setName(name);
        if(i==0)
        {
            max.setRadius(pizza[0].getRadius());
            max.setName(pizza[0].getName());
        }
        if(i>0)
        {
            if(max.getRadius()<pizza[i].getRadius())
            {
                max.setRadius(pizza[i].getRadius());
                max.setName(pizza[i].getName());
            }
        }
    }
    cout << "가장 면적이 큰 피자는 " << max.getName() << "입니다";
}