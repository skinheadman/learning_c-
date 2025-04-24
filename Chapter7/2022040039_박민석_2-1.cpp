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

    bool operator == (string title);
    bool operator == (int price);
    bool operator == (Book &op2);

    void show() {
        cout << title << " " << price << "원 " << pages << " 페이지" << "\n";
    }
    string getTitle() { return title; }
};

bool Book::operator==(string title)
{
    if(this->title.compare(title)==0) return true;
    else return false; 
}

bool Book::operator==(int price)
{
    if(this->price==price) return true;
    else return false;
}

bool Book::operator==(Book &op2)
{
    if(this->pages==op2.pages && this->price==op2.price && this->title.compare(op2.title)==0) return true;
    else return false;
}

int main()
{
    Book a("명품 C++",30000,500), b("고품 C++",30000,500);
    if(a==30000) cout << "정가 30000원" << "\n";
    if(a == "명품 C++") cout << "명품 C++ 입니다." << "\n";
    if(a==b) cout << "두 책이 같은 책입니다." << "\n";
}