#include <iostream>
#include <cstring>
using namespace std;

class Book
{
    char *title;
    int price;
    public :
    Book(const char* title, int price);
    Book(const Book& b);
    ~Book();
    void set(char* title, int price);
    void show() {cout << title << " " << price << "원" << "\n";}
};

Book::Book(const char* title, int price)
{
    this->title=new char [10];
    strcpy(this->title, title);
    this->price = price;
}

Book::Book(const Book& b)
{
    this->title=new char [10];
    strcpy(this->title, b.title);
    this->price = b.price;
}

Book::~Book()
{
    delete [] title;
}

void Book::set(char* title, int price)
{
    if(this->title!=NULL) delete [] title;
    this->title = new char [10];
    strcpy(this->title,title);
    this->price = price;
}

int main()
{
    Book cpp("명품C++", 10000);
    Book java = cpp;
    java.set("명품자바",12000);
    cpp.show();
    java.show();
}
