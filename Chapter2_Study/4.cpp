#include <iostream>
using namespace std;

int main()
{
    float n[5];
    cout << "5 개의 실수를 입력하여라>>";
    float max = 0;
    for(int i=0;i<5;i++)
    {
        cin >> n[i];
    }
    max = n[0];
    cout << "제일 큰 수 = ";
    for(int i=0;i<5;i++)
    {
        if(max <n[i])
        {
            max=n[i];
        }
    }
    cout << max;
}