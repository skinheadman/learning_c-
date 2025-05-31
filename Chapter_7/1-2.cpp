#include <iostream>
#include <string>
using namespace std;

class Book;

Book& operator -= (Book& op1, int value);
Book& operator += (Book& op1, int value);

class Book {
    string title;
    int price, pages;

public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }

    friend Book& operator -= (Book& op1, int value);

    friend Book& operator += (Book& op1, int value);

    void show() {
        cout << title << " " << price << "원 " << pages << " 페이지" << "\n";
    }
    string getTitle() { return title; }
};

Book& operator += (Book&op1, int value)
{
    op1.price += value;
}

Book& operator -= (Book&op1, int value)
{
    op1.price -= value;
}

int main()
{
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    a += 500; 
    b -= 500; 

    a.show();
    b.show();
}