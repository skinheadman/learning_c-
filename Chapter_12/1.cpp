#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("words.txt");
    if(!fin) {
        cout << "words.txt 읽기 실패" << endl;
        return 0;
    }
    int c;
    while((c = fin.get())!=EOF) {
        cout << (char)c;
    }
    fin.close();
}