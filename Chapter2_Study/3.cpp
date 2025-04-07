#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "두 수를 입력하여라>>";
    cin >> n1 >> n2;
    cout << "큰 수 = ";
    if(n1>n2)
    {
        cout << n1;
    }
    else
    {
        cout << n2;
    }
}