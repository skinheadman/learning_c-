#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *flag = new char [100];
    do
    {
        cout << "종료하고 싶으면 yes를 입력하세요>>";
        cin.getline(flag,10);
    } while (strcmp(flag,"yes")!=0);
    
}