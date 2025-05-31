#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;

int main() {
    const char* file = "c:\\windows\\system.ini";
    const char* secfile = "words.txt";
    ifstream fin(file, ios::ate);
    ofstream fout(secfile);
    if(!fin) {
        cout << file << "읽기 실패" << endl;
        return 0;
    }
    if(!fout) {
        cout << secfile << "쓰기 실패" << endl;
        return 0;
    }
    char line [1024];
    int a_count = fin.tellg()/10;
    fin.seekg(0);
    int count = 1;
    int size = 0;
    while(!fin.eof()) {
        fin.read(line,a_count);
        cout << "." << fin.gcount() << "B " << count++*10 << "%" << endl;
        fout.write(line,fin.gcount());
        size+=fin.gcount();   
    }
    cout << size << "B 복사 완료" << endl;
    fin.close();
    fout.close();
}
// 다시 풀어보기