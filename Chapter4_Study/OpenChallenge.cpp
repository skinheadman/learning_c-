#include <iostream>
#include <string>
using namespace std;

class Player
{
    string name;
    public :
    Player();
    void setname(string name);
    string getName();
};

Player::Player()
{
    
}

void Player::setname(string name)
{
    this->name = name;
}

string Player::getName()
{
    return name;
}

class WordGame
{
    string *word = new string [2];
    int size;
    Player *player;
    public:
    WordGame();
    void game();

};

WordGame::WordGame()
{
    word[0] = "아버지";
}

void WordGame::game()
{
    cout << "끝말 잇기 게임을 시작합니다" << "\n";
    cout << "게임에 참가하는 인원은 몇명입니까?";
    cin >> size;
    cin.ignore();
    player = new Player [size];
    int index = 0;
    for(int i=0;i<size;i++)
    {
        cout << "참가자의 이름을 입력하세요.    빈칸없이>>";
        string name;
        getline(cin,name);
        player[i].setname(name);
    }
    cout << "시작하는 단어는 아버지입니다" << "\n";
    while(true)
    {
        string& fword = word[0];
        string& sword = word[1];
        int f_len = fword.length();
        cout << player[index].getName() << ">>";
        getline(cin, sword);
        if(fword.at(f_len-2)==sword.at(0)&&fword.at(f_len-1)==sword.at(1))
        {
            fword = sword;
            index++;
            if(index==size-1) index = 0;
        }
        else 
        {
            cout << fword[f_len-1];
            cout << player[index].getName() << "is loss";
            delete [] player;
            break;
        }
    }
}

int main()
{
    WordGame start;
    start.game();
}