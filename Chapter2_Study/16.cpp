#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char buf[10000];
    int a_num[26];
    char n_num[26];
    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << "\n" << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << "\n";
    cin.getline(buf,10000,';');
    for(int i=0;i<strlen(buf);i++)
    {
        if(buf[i]>='A'&&buf[i]<='Z')
        {
            buf[i]=tolower(buf[i]);
        }
        a_num[buf[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        n_num[i] = 'a' + i;
    }
    for(int i=0;i<26;i++)
    {
        cout << n_num[i] << "(" << a_num[i] << ")" << "\t" << ": ";
        for(int j = 0;j<a_num[i];j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}