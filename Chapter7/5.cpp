#include <iostream>
using namespace std;

class Color
{
    int red, blue, green;
    public:
//    Color() { red = green = blue = 0;}
    Color(int r = 0, int g = 0, int b = 0) { red = r; green = g; blue = b;}
    void setColor(int r, int g, int b) { red = r; green = g; blue = b;}
    void show() { cout << red << " " << green << " " << blue << "\n";}

    Color& operator + (Color op2);
    bool operator == (Color op2);
        
};

Color& Color::operator + (Color op2)
{
    this->red += op2.red;
    this->green += op2.green;
    this->blue += op2.blue;
    return *this;
}

bool Color::operator == (Color op2)
{
    if(this->red==op2.red && this->blue==op2.blue && this->green==op2.green) return true;
    else return false;
}


int main()
{
    Color red(255,0,0), blue(0,0,255), c;
    c= red + blue;
    c.show();

    Color funchsia(255,0,255);
    if(c==funchsia)
        cout << "보라색 맞음";
    else 
        cout << "보라색 아님";
    
}