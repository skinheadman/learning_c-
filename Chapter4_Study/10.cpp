#include <iostream>
#include <string>
using namespace std;

class Person
{
    string name;
    public:
    Person() {}
    Person(string name) { this->name = name; }
    string getName() { return name; }
};

class Family
{
    Person *p;
    int size;
    public :
    Family(string name, int size);
    void setName(int id, string name);
    void show();
    ~Family();
};

Family::Family(string name, int size)
{
    this->size = size;
    p=new Person [size];
    for(int i=0;i<size;i++)
    {
        p[i] = Person(name);
    }
}

void Family::setName(int id, string name)
{
    p[id] = Person(name);
}

void Family::show()
{
    for (int i=0;i<size;i++)
    {
        cout << p[i].getName() << "\t";
    }
}

Family::~Family()
{
    delete [] p;
}

int main()
{
    Family *simpson = new Family("Simpson", 3);
    simpson->setName(0,"Mr. Simpson");
    simpson->setName(1,"Mrs. Simpson");
    simpson->setName(2,"Bart Simpson");
    simpson->show();
    delete simpson;
}