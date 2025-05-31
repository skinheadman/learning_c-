#include <iostream>
using namespace std;

class Circle{
    int radius;
public :
    Circle(int radius=0) { this->radius = radius; }
    void show() {cout << "radius = " << radius << " 인 원" << endl;}
    friend Circle& operator ++ (Circle& a);
    friend Circle operator ++ (Circle& b, int x);
};

Circle& operator ++ (Circle& a) {
    a.radius++;
    return a;
}

Circle operator ++ (Circle& b, int x) {
    Circle tmp = b;
    b.radius++;
    return tmp;
}

int main() {
    Circle a(5), b(4);
    ++a;
    b = a++;
    a.show();
    b.show();
}