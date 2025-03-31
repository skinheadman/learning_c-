#include <iostream>
#include <cstring>
using namespace std;

class Book
{
    char *title;
    int price;
    public :
    Book(const char* title, int price); // read title && set price?
    Book(Book& b);
    ~Book();
    void set(const char* title, int price); // set title && price
    void show() { cout << title << ' ' << price << "원" << "\n"; }

};

Book::Book(const char* title, int price)
{
    this->price = price;
    int len = strlen(title);
    this->title = new char [len+1];
    strcpy(this->title,title);
    
}

Book::Book(Book& b)
{
    price = b.price;
    int len = strlen(b.title);
    title = new char [len+1];
    strcpy(title,b.title);
}

Book::~Book() { delete [] title; }

void Book::set(const char* title, int price)
{
    delete [] this->title; 
    this->price = price;
    int len = strlen(title);
    this->title = new char [len+1];
    strcpy(this->title,title);

}

int main()
{
    Book cpp("명품C++",10000);
    Book java = cpp;
    java.set("명품자바",12000);
    cpp.show();
    java.show();
}