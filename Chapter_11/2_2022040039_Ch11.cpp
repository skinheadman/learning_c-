#include <iostream>
using namespace std;

int main() {
    char ch;
    int n=0;
    while(true) {
        cin.get(ch);
        if(cin.eof()) break;
        if(ch==' ') n++;
        if(ch=='\n') break;
    }
    cout << n;
}