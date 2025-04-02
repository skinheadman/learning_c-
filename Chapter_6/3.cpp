#include <iostream>
using namespace std;

int big(int num1, int num2, int max=100)
{
    int max_num = num1;
    if(num1<num2)
    {
        max_num=num2;
    }

    if(max_num<max)
    {
        return max_num;
    }
    else return max;
    
}

int main()
{
    int x = big(3,5);
    int y = big(300,60);
    int z = big(30,60,50);
    cout << x << " " << y << " " << z << "\n";
}