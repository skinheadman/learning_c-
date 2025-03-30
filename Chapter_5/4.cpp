#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big)
{
    if(a==b)
    {
        return true;
    }
    else
    {
        if(a>b)
        {
            big=a;
        }
        else
        {
            big=b;
        }
        return false;
    }
}

int main()
{
    int a, b, big;
    cin >> a >> b;
    big = 1;
    bigger(a, b, big);
    cout << big;
}