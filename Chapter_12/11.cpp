#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <fstream>
using namespace std;

void replaceword(string& words) {
    int size = words.length();
    for(int i=0;i<2;i++) {
        char random = words[rand()%size];
        if(random=='-') {
            int unk1 = rand()%size;
            
        }
        for(int j = 0; j<size;j++) {
            if(words[j]==random) {
                words[j] = '-';
            }
        }
    }
}

void findword(string words, string & word,char answer) {
    while(true) {
        int n = words.find(answer);
        if(n!=-1) {
            word[n] = answer;
        }
        else {
            break;
        }
    }
}

int main() {
    const char* file = "words.txt";
    ifstream fin(file);
    vector <string> v;
    srand((unsigned)time(0));
    bool count = false;
    if(!fin) {
        cout << file << "읽기 실패" << endl;
        return 0;
    }
    string line;
    while(getline(fin,line)) {
        v.push_back(line);
    }
    fin.close();
    cout << "--------------------------------------" << endl;
    cout << "지금부터 행맨 게임을 시작합니다." << endl;
    cout << "--------------------------------------" << endl;
    while(true) {
        int n = rand()%25143;
        string word = v[n];
        int size = word.length();
        char answer;
        replaceword(word);
        for(int i=0;i<5;i++) {
            cout << word << '\n' << ">>";
            cin >> answer;
            findword(v[n],word,answer);
            if(v[n]==word) {
                count=true;
                break;
            }
        }
        if (!count) {
            cout << "5번 실패 하였습니다." << "\n" << v[n];
        }
        char next;
        cout << "Next(y/n)?";
        cin >> next;
        if(next=='n') {
            break;
        }
    }
    
}