#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random
{
    private :
    double num;
    public :
    Random() { };
    static void seed() {srand((unsigned)time(0));}
    static int nextInt(int min = 0, int max = 32767);
    static char nextAlphabet();
    static double nextDouble();
};

int Random::nextInt(int min, int max)
{
    int n = (rand()%max)+min;
    return n;
}

char Random::nextAlphabet()
{
    int n = nextInt(0, 26);
    int i_num = rand()%2;
    char a;
    if(i_num==1)
    {
        a = 'a' + n;
    }
    else
    {
        a = 'A' + n;
    }

    return a;
}

double Random::nextDouble()
{
    double num = rand()/(double)rand();
    return num;
}

int main()
{
    Random n;
    n.seed();
    int num;
    char alpha;
    double num_;

    cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << "\n";
    for(int i=0;i<10;i++)
    {
        num=n.nextInt(1,100);
        cout << num << " ";
    }

    cout << "\n" << "알파벳을 랜덤하게 10개를 출력합니다" << "\n" ;
    for(int i=0;i<10;i++)
    {
        alpha = n.nextAlphabet();
        cout << alpha << " ";
    }

    cout << "\n" << "랜덤한 실수를 10개를 출력합니다" << "\n";
    for(int i=0;i<10;i++)
    {
        num_=n.nextDouble();
        cout << num_ << " ";
        if(i==4)
        {
            cout << "\n";
        }
    }
}