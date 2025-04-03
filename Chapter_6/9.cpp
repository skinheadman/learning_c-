#include <iostream>
#include <string>
using namespace std;

class Board
{
    static string *sArray;
    public:
    static void add(string input);
    static void print();
};

string *Board::sArray = new string [100];
int count = 0;
bool jump = false;
void Board::add(string input)
{
    sArray[count++] = input;
}

void Board::print()
{
    if(jump==false) jump=true;
    else jump = false;
    cout << "************* 게시판입니다. *************" << "\n";
    for(int i=0;i<count;i++)
    {
        cout << i << ": " << sArray[i] << "\n";
    }
    if(jump) cout << "\n";
}

int main()
{
    Board::add("중간고사는 감독 없는 자율 시험입니다.");
    Board::add("코딩 라운지 많이 이용해 주세요.");
    Board::print();
    Board::add("잔소린 학생이 경진대회 입상하였습니다. 축하해주세요");
    Board::print();
}