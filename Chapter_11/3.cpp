#include <iostream>
using namespace std;

int main() {
    char ch[80];
    while (true) {
        cin.ignore(80, ';');
        if (cin.eof()) break;

        cin.get(ch, 80);
        if (cin.eof()) break; 

        cin.ignore(); 

        cout << ch << "\n";  
    }
}