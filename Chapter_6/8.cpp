
#include <iostream>
#include <cstring>
using namespace std;

int count = 0;

class Trace
{
    private :
    static string *DEBUG_ARRAY;
    public :
    static void put(string tag, string debugging);
    static string print(string tag_info="");
};

string *Trace::DEBUG_ARRAY = new string [200];

void Trace::put(string tag, string debugging)
{
    for(int i=0;i<2;i++)
    {   
        if(i==0)
        {
            DEBUG_ARRAY[count++]=tag;
        }
        else
        {
            DEBUG_ARRAY[count++]=debugging;
        }
    }
}

string Trace::print(string tag_info)
{
    if(tag_info=="")
    {
        cout << "----- f()태그의 Trace 정보를 출력합니다.-----" << "\n";
        for(int i=0;i<count;i++)
        {
            if(i%2==0)
            {
                cout << DEBUG_ARRAY[i] << ":";
            }
            else
            {
                cout << DEBUG_ARRAY[i] << "\n";
            }
        }
    }
    else
    {
        cout << "----- 모든 Trace 정보를 출력합니다. -----" << "\n";
        for(int i=0;i<count;i++)
        {
            if(i%2==0 && DEBUG_ARRAY[i]==tag_info)
            {
                cout << DEBUG_ARRAY[i] << ":" << DEBUG_ARRAY[i+1] << "\n";
            }
        }
    }
}

void f()
{
    int a, b, c;
    cout << "두 개의 정수를 입력하세요>>";
    cin >> a >> b;
    Trace::put("f()","프로그램 시작합니다");
    c = a + b;
    Trace::put("f()","합 계산");
    cout << "합은 " << c << "\n";
}

int main()
{
    Trace::put("main()","프로그램 시작합니다");
    f();
    Trace::put("main()","종료");

    Trace::print("f()");
    Trace::print();
}