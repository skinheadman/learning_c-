#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random
{
    public :
    Random();
    int nextInRange(int n1, int n2);
    int next();
};

Random::Random()
{
    srand((unsigned)time(0));
}

int Random::next()
{
    int random = (rand()/2)*2;
    return random;
}

int Random::nextInRange(int n1, int n2)
{
    int random = 2*(rand()%(n2-n1)/2)+n1;
    return random;
}

int main()
{
    Random r;
    cout << "-- 0에서" << RAND_MAX << "까지의 랜덤 정수 10개 --" << "\n";
    for(int i=0;i<10;i++)
    {
        int n = r.next();
        cout << n << " ";
    }
    cout << "\n" << "\n" << "-- 2에서" << "9 까지의 랜덤 정수 10 개--" << "\n";
    for(int i=0;i<10;i++)
    {
        int n = r.nextInRange(2,9);
        cout << n << " ";
    }
    cout << "\n";
}