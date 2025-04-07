#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class UpAndDownGame
{
    private:
    static string name;
    public :
    UpAndDownGame() { srand((unsigned)time(0));}
    UpAndDownGame(int r);
};

class Person
{
    private:
    string name;
    public :
    Person()
    {
        
    }
};