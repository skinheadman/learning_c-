#include <iostream>
#include <string>
using namespace std;

class Book;

bool operator < (string op2, const Book &op1);


class Book {
    string title;
    int price, pages;

public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }

    friend bool operator < (string op2, const Book& op1);    

    void show() {
        cout << title << " " << price << "원 " << pages << " 페이지" << "\n";
    }
    string getTitle() { return title; }
};

bool operator < (string op2, const Book& op1)
{
    if(op1.title.compare(op2)==1) return true;
    else return false;
}



int main()
{
    Book a("청춘", 20000, 300);
    string b;
    cout << "책 이름을 입력하세요>>";
    getline(cin, b);
    if(b<a) 
        cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << "\n";
}