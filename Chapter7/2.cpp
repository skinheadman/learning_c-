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

    bool operator == (int value) {
        
        if(price == value)
        {
            return true;
        }
        else return false;
    }

    bool operator == (const string& value) {
        
        if(title == value)
        {
            return true;
        }
        else return false;
    }

    bool operator == (const Book&op2) {
        
        if(title == op2.title && price == op2.price && pages == op2.pages)
        {
            return true;
        }
        else return false;
    }


    void show() {
        cout << title << " " << price << "원 " << pages << " 페이지" << "\n";
    }
    string getTitle() { return title; }
};

int main()
{
    Book a("명품 C++",30000,500), b("고품 C++",30000,500);
    if(a==30000) cout << "정가 30000원" << "\n";
    if(a == "명품 C++") cout << "명품 C++ 입니다." << "\n";
    if(a==b) cout << "두 책이 같은 책입니다." << "\n";
}