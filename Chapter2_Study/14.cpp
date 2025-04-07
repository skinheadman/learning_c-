#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    string coffee;
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << "\n";
    while(sum<=20000)
    {
        cout << "주문>>";
        cin >> coffee >> num;
        if(coffee=="에스프레소")
        {
            cout << 2000*num << "원 입니다. 맛있게드세요" << "\n";
            sum += 2000*num;
        }
        else if(coffee=="아메리카노")
        {
            cout << 2300*num << "원 입니다. 맛있게드세요" << "\n";
            sum+=2300*num;
        }
        else if(coffee=="카푸치노")
        {
            cout << 2500*num << "원 입니다. 맛있게드세요" << "\n";
            sum+=2500*num;
        }
        else
        {
            cout << "없는 메뉴입니다. 다시 주문해주세요." << "\n";
        }
    }
    cout << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~";
}