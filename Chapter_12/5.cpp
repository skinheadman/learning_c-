#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    const char* file = "source.cpp";
    const char* secfile = "exp.cpp";
    ifstream fin(secfile);
    ofstream fout(file);
    if(!fin) {
        cout << secfile << "읽기 실패" << endl;
        return 0;
    }
    if(!fout) {
        cout << file << "쓰기 실패" << endl;
        return 0;
    }
    string line;
    while(getline(fin,line)){
        int found = line.find("//");
        if(found!=-1) {
            line = line.erase(found);
        }
        fout << line << endl;
    }
    fin.close();
    fout.close();
}