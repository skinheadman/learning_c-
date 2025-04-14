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

    Color operator +(const Color& op1)
    {
        red = red + op1.red;
        green = green + op1.green;
        blue = blue + op1.blue;
        return *this;
    }

    bool operator ==(const Color&op1)
    {
        if(red == op1.red && blue == op1.blue && green == op1.green) return true;
        else return false;
    }
};

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