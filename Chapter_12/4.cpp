#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

int main() {
    const char* file = "c:\\windows\\system.ini";
    const char* secfile = "words.txt";
    ifstream fin(file);
    ofstream fout(secfile);
    if(!fin) {
        cout << file << "읽기 실패" << endl;
        return 0;
    }
    if(!fout) {
        cout << secfile << "읽기 실패" << endl;
        return 0;
    }
    int c;
    while((c=fin.get())!=EOF) {
        char alpha = (char)c;
        alpha = toupper(alpha);
        fout.put(alpha);
    }
    fin.close();
    fout.close();
}