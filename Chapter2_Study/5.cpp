#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char wArray[100];
    int count = 0;
    cout << "문자들을 입력하여라(100개 미만) ." << "\n";
    cin.getline(wArray,100,'\n');
    for(int i=0;i<strlen(wArray);i++)
    {
        if(wArray[i]=='x')
        {
            count++;
        }
    }
    cout << "x의 개수는 " << count;
}