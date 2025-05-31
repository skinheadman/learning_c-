#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price, pages;

public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }

    bool operator! ();


    void show() {
        cout << title << " " << price << "원 " << pages << " 페이지" << "\n";
    }
    string getTitle() { return title; }
};

bool Book::operator!()
{
    if(price==0) return true;
    else return false;
}

int main()
{
    Book book("벼룩시장",0,50);
    if(!book) cout << "공짜다" << "\n";
}