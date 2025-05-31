#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    const char* file = "c:\\windows\\system.ini";
    ifstream fin(file);
    string line;
    int count = 1;
    if(!fin) {
        cout << file << "읽기 실패" << endl;
        return 0;
    }
    while(getline(fin,line)) {
        cout << count++ << " : " << line << endl;
    }
    
    fin.close();
}