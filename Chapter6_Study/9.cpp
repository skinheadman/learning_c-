#include <iostream>
#include <string>
using namespace std;



class Board
{
    public :
    static string board[100];
    static int count;
    static void add (string n);
    static void print();
};

string Board::board[100];

int Board::count = 0;

void Board::add(string n)
{
    board[count++] = n;
}

void Board::print()
{
    cout << "*게시판입니다.*"<<"\n";
    for(int i=0;i<count;i++)
    {
        cout << board[i] << "\n";
    }
}

int main()
{
    Board::add("중간고사는 감독 없는 자율 시험입니다.");
    Board::add("코딩 라운지 많이 이용해주세요.");
    Board::print();
    Board::add("dalkfsj;alt");
    Board::print();
}