#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string name;
    string address;
    int age;

    cout << "이름은?";
    getline(cin,name);
    cout << "주소는?";
    getline(cin,address);
    cout << "나이는?";
    cin >> age;
    cout << name << ", " << address << ", " << age << "세";
}