#include <iostream>
using namespace std;

int main() {
    char ch[80];
    while (true) {
        cin.get(ch, 80, ';');
        if(cin.eof()) break;

        cout << ch << "\n";

        cin.ignore(80,'\n'); 
    }
}