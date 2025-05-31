#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

int main() {
    const char* file = "c:\\windows\\system.ini";
    ifstream fin(file);
    if(!fin) {
        cout << file << "읽기 실패" << endl;
        return 0;
    }
    int c;
    while((c=fin.get())!=EOF) {
        char alpha = (char)c;
        alpha = toupper(alpha);
        cout << alpha;
    }
    fin.close();
}