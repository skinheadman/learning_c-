#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *wArray = new char [5];
    char *cArray = new char [5];
    cout << "새 암호를 입력하세요>>";
    cin >> wArray;
    cout << "새 암호를 다시 한 번 입력하세요>>";
    cin >> cArray;
    if(strcmp(wArray,cArray)==0)
    {
        cout << "같습니다";
    }
    else
    {
        cout << "다릅니다";
    }
}