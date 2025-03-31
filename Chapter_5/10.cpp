#include <iostream>
using namespace std;

class Buffer
{
    string text;
    public :
    Buffer(string text) 
    {
        this->text = text;
    }
    void add(string next) { text += next; }
    void print() { cout << text << "\n"; }
};

Buffer& append(Buffer& c, string next)
{
    c.add(next);
    return c;
}

int main()
{
    Buffer buf("Hello");
    Buffer& temp = append(buf,"Guys");
    temp.print();
    buf.print();
}

