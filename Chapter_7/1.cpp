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

    Book operator+=(int price);
    Book operator-=(int price);

    void show() {
        cout << title << " " << price << "원 " << pages << " 페이지" << "\n";
    }
    string getTitle() { return title; }
};

Book Book::operator += (int price)
{
    this->price += price;
}

Book Book::operator-=(int price)
{
    this->price-=price;
}

int main()
{
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    a+=500;
    b-=500;
    a.show();
    b.show();
}