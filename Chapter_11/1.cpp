#include <iostream>
using namespace std;

int main() {
    int ch;
    int n=0;
    while((ch=cin.get())!=EOF) {
        if(ch=='a') n++;
        if(ch=='\n') break;
    }
    cout << n;
}