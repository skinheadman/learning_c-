#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[100];
    char c_name[100] = {"",};
    cout << "5 명의 이름을 ';'으로 구분하여 입력하세요" << "\n";
    for(int i=0;i<5;i++)
    {
        cin.getline(name,100,';');
        cout << i+1 << " : " << name << "\n";
        if(c_name==nullptr)
        {
            strcpy(c_name,name);
        }
        else
        {
            if(strlen(c_name)<strlen(name))
            {
                strcpy(c_name,name);
            }
        }
    }
    cout << "가장 긴 이름은 " << c_name;

}