#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Player
{
    string name;
    public :
    Player() {};
    void setName(string name) { this->name=name; }
    string getName() { return name; }
};

class GamblingGame
{
    int Random;
    public :
    GamblingGame() {srand((unsigned)time(0));}
    GamblingGame(string name);
    void setRandom();
    int getRandom();
};

GamblingGame::GamblingGame(string name)
{
    GamblingGame num[3];
    cout << "\t" << "\t";
    for(int i=0;i<3;i++)
    {
        num[i].setRandom();
        cout << num[i].getRandom() <<"\t";
    }
    if(num[0].getRandom()==num[1].getRandom() && num[0].getRandom()==num[2].getRandom())
    {
        cout << name << "님 승리!!";
        exit(0);
    }
    else
    {
        cout << "아쉽군요!!";
        cout << "\n";
    }
    
}

void GamblingGame::setRandom()
{
    Random=rand()%3;
}

int GamblingGame::getRandom()
{
    return Random;
}

int main()
{
    int n=0;
    string Enter_;
    Player *G_Name = new Player [2];
    string name;
    cout << "***** 겜블링 게임을 시작합니다. *****" << "\n";
    cout << "첫번째 선수 이름>>";
    cin >> name;
    G_Name[0].setName(name);
    cout << "두번째 선수 이름>>";
    cin >> name;
    G_Name[1].setName(name);
    cout << "\n";
    while(true)
    {
        cout << G_Name[n].getName() << ":";
        getline(cin,Enter_);
        cin.ignore();
        if(Enter_.empty())
        {
            cout << "\n";
            GamblingGame(G_Name[n].getName());
            if(n==0) n=1;
            else n=0;

        }
        
    }

}