#include <iostream>
#include <string>
using namespace std;

class Trace
{
    static int count;
    static string tag[101];
    static string debug[101];
    public :
    static void put(string tag_, string debug_);
    static void print(string tag_="");
};

int Trace::count = 0;
string Trace::tag[101];
string Trace::debug[101];

void Trace::put(string tag_, string debug_)
{
    tag[count]=tag_;
    debug[count]=debug_;
    count++;
}

void Trace::print(string tag_)
{
    if(tag_=="") cout << "----" << "모든 Trace 정보를 출력합니다." << "----" << "\n";
    else cout << "----" << tag_ << "태그의 정보를 출력합니다." << "----" << "\n";
    for(int i=0;i<count;i++)
    {
        if(tag_==tag[i])
        {
            cout << tag_ << ":" << debug[i] << "\n";
        }
        if(tag_=="")
        {
            cout << tag[i] << ":" << debug[i] << "\n";
        }
    }
}

void f()
{
    int a,b,c;
    cout << "두 개의 정수를 입력하세요>>";
    cin >> a >> b;
    Trace::put("f()","정수를 입력 받았음.");
    c = a + b;
    Trace::put("f()","합 계산");
    cout << "합은" << c << "\n";
}

int main()
{
    Trace::put("main()","프로그램 종료합니다.");
    f();
    Trace::put("main()","종료");

    Trace::print("f()");
    Trace::print();
}