#include <iostream>
using namespace std;

int main()
{
    string cArray;
    cout << "문자열 입력>>";
    cin >> cArray;
    for(int i=0;i<cArray.length();i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << cArray[j];
        }
        cout << "\n";
    }
}