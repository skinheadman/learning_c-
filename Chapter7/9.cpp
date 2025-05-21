#include <iostream>
using namespace std;

class Circle{
    int radius;
public :
    Circle(int radius=0) { this->radius = radius; }
    void show() {cout << "radius = " << radius << " 인 원" << endl;}
    friend Circle& operator ++ (Circle& a);
    friend Circle operator + (int x, Circle& b);
};

Circle& operator ++ (Circle& a) {
    a.radius++;
    return a;
}

Circle operator + (int x, Circle& b) {
    Circle tmp;
    tmp.radius = 1 + b.radius;
    return tmp;
}

int main() {
    Circle a(5), b(4);
    b = 1 + a;
    a.show();
    b.show();
}