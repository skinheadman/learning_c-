
#include <iostream>
#include <cstring>
using namespace std;

class Book
{
    char* title;
    int price;
public:
    Book(const char* title, int price); // read title && set price?
    ~Book();
    void set(char* title, int price); // set title && price
    void show() { cout << title << ' ' << price << "원" << "\n"; }

};

Book::Book(const char* title, int price)
{
    int size = strlen(title);
    this->title = new char[size + 1];
    strcpy(this->title, title);
    this->price = price;
}

Book::~Book()
{
    delete[] title;
}

void Book::set(char*title, int price)
{
    int size = strlen(title);
    if(this->title) delete [] title;
    this->title = new char [size];
    strcpy(this->title,title);
    this->price = price;
}

int main()
{
    Book cpp("명품C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}