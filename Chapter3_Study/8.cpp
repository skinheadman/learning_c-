#include <iostream>
#include <string>
using namespace std;

class Integer
{
    int integer;
    public :
    Integer(string num)
    {
        int c_num = stoi(num);
        integer = c_num;
    }
    Integer(int num)
    {
        integer = num;
    }
    int get()
    {
        return integer;
    }
    void set(int num)
    {
        integer = num;
    }
    bool isEven()
    {
        return true;
    }
};

int main()
{
    Integer n(30);
    cout << n.get() << " ";
    n.set(50);
    cout << n.get() << " ";

    Integer m("300");
    cout << m.get() << " ";
    cout << m.isEven();
}