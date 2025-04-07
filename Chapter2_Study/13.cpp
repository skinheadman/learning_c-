#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 0;
    cout << "***** 승리장에 오신 것을 환영합니다. *****" << "\n";
    do
    {
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
        cin >> num;
        if(num<4)
        {
            cout << "몇인분?";
            cin >> count;
        }
        switch (num)
        {
        case 1:
            cout << "짬뽕 " << count << "인분 나왔습니다" << "\n";
            break;
        case 2:
            cout << "짜장" << count << "인분 나왔습니다" << "\n";
            break;
        case 3 :
            cout << "군만두" << count << "인분 나왔습니다" << "\n";
            break;
        case 4 :
            cout << "오늘 영업은 끝났습니다.";
            break;
        default:
            cout << "다시 주문하세요!!" << "\n";
        }
    } while (num!=4);
    
}