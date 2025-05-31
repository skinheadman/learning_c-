#include <iostream>
#include <string>
using namespace std;

class Book;
bool operator == (Book op1, string title);
bool operator == (Book op1, int price);
bool operator == (Book op1, Book op2);


class Book {
    string title;
    int price, pages;

public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }

    friend bool operator == (Book op1, string title);
    friend bool operator == (Book op1, int price);
    friend bool operator == (Book op1, Book op2);

    void show() {
        cout << title << " " << price << "원 " << pages << " 페이지" << "\n";
    }
    string getTitle() { return title; }
};

bool operator == (Book op1, string title)
{
    if(op1.title.compare(title)==0) return true;
    else return false;
}

bool operator == (Book op1, int price)
{
    if(op1.price == price) return true;
    else return false;
}

bool operator == (Book op1, Book op2)
{
    if(op1.title.compare(op2.title)==0 && op1.price==op2.price && op1.pages == op2.pages) return true;
    else return false;
}


int main()
{
    Book a("명품 C++",30000,500), b("고품 C++",30000,500);
    if(a==30000) cout << "정가 30000원" << "\n";
    if(a == "명품 C++") cout << "명품 C++ 입니다." << "\n";
    if(a==b) cout << "두 책이 같은 책입니다." << "\n";
}