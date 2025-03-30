// #include <iostream>
// using namespace std;

// class Circle
// {
//     private :
//     int radius;
//     public :
//     Circle();
//     Circle(int r);
//     ~Circle();
//     double getArea() { return 3.14*radius*radius; }
//     int getRadius() { return radius; }
//     void setRadius(int radius) {this->radius=radius;}
// };

// Circle::Circle()
// {
//     radius = 1;
//     cout << "생성자 실행 radius = " << radius << "\n"; 
// }

// Circle::Circle(int radius)
// {
//     this->radius=radius;
//     cout << "생성자 실행 radius = " << radius << "\n";
// }

// Circle::~Circle()
// {
//     cout << "소멸자 실행 radius = " << radius << "\n";
// }

// void increase(Circle c)
// {
//     int r = c.getRadius();
//     c.setRadius(r+1);
// }

// int main()
// {
//     Circle waffle(30);
//     increase(waffle);
//     cout << waffle.getRadius() << "\n";
// }

// #include <iostream>
// using namespace std;

// class Circle
// {
//     private:
//     int radius;
//     public :
//     Circle(const Circle& c);
//     Circle() { radius = 1; }
//     Circle(int radius) { this->radius = radius;}
//     double getArea() { return 3.14*radius*radius; }
// };

// Circle::Circle(const Circle& c)
// {
//     this->radius=c.radius;
//     cout << "복사 생성자 실행 radius = " << radius << "\n";

// }

// int main()
// {

//     Circle src(30);
//     Circle dest(src);

//     cout << "원본의 면적 = " << src.getArea() << "\n";
//     cout << "사본의 면적 = " << dest.getArea() << "\n";
// }


// #define _CRT_SECURE_NO_WARNINGS
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Person
// {
//     char *name;
//     int id;

//     public :
//     Person(int id, const char* name);
//     Person(const Person& person);
//     ~Person();
//     void changeName(const char* name);
//     void show() { cout << id << "," << name << "\n"; }
// };

// Person::Person(int id, const char* name)
// {
//     this->id=id;
//     int len = strlen(name);
//     this->name = new char [len+1];
//     strcpy(this->name, name);
// }

// Person::Person(const Person& person)
// {
//     this->id = person.id;
//     int len=strlen(person.name);
//     this->name= new char [len+1];
//     strcpy(this->name,person.name);
//     cout << "복사 생성자 실행, 원본 객체의 이름" << this->name << "\n";
// }

// Person::~Person()
// {
//     if(name)
//         delete [] name;
// }

// void Person::changeName(const char* name)
// {
//     if(strlen(name) > strlen(this->name))
//         return;
//     strcpy(this->name,name);
// }

// int main()
// {
//     Person father(1, "Kitae");
//     Person daughter(father);

//     cout << "daughter 객체 생성 직후 ----" << "\n";
//     father.show();
//     daughter.show();

//     daughter.changeName("Grace");
//     cout << "daughter 이름을 Grace로 변경한 후 ----" << "\n";
//     father.show();
//     daughter.show();

//     return 0;
// }