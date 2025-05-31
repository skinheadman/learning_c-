#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
 
 
 
int main() {
    srand((unsigned)time(0));
    char input=0;
    string line;
    vector<string> v;
    ifstream fin("c:\\Temp\\words.txt");
    if (!fin) {
        cout << "c:\\Temp\\words.txt 열기 오류" << endl;
    }
    while (getline(fin, line)) {
        v.push_back(line);
    }
    fin.close();
    cout << "--------------------------------------" << endl;
    cout << "지금부터 행맨 게임을 시작합니다." << endl;
    cout << "--------------------------------------" << endl;
    while (true) {
        bool a = false;
        int random = rand() % 25143;
        string answer = v[random];
        string example;
        int unk1, unk2;
        unk1 = rand() % answer.length();
        while (true) {
            unk2 = rand() % answer.length();
            if (unk1 != unk2)
                break;
        }
        for (int i = 0; i < answer.length(); i++) {
            if (i == unk1 || i == unk2)
                example.append("-");
            else
                example.append(answer, i, 1);
        }
        for (int i = 0; i < 5; i++) {
            cout << example << endl;
            cout << ">>";
            cin >> input;
            if (input == answer[unk1]) {
                int idx = answer.find(input);
                example[idx] = input;
            }
            else if (input == answer[unk2]) {
                int idx = answer.find(input);
                example[idx] = input;
            }
            if (example == answer) {
                cout << answer << endl;
                a = true;
                break;
            }
        }
        if (a == false) {
            cout << "5번 실패 하였습니다." << endl;
            cout << answer << endl;
        }
        cout << "Next(y/n)?";
        cin >> input;
        if (input == 'n')
            return 0;
    }
 
 
}