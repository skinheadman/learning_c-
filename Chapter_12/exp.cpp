// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     const char* file = "c:\\windows\\system.ini";
//     ifstream fin(file);
//     if(!fin) {
//         cout << file << "열기 오류" << endl;
//         return 0;
//     }
//     int count = 0;
//     int c;
//     while((c=fin.get())!=EOF) {
//         cout << (char)c;
//         count++;
//     }

//     cout << "읽은 바이트 수는 " << count << endl;
//     fin.close();
// }
// 예제 12-6
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void fileRead(vector<string> & v, ifstream & fin) { // fin 파일 전체를 벡터 v에 읽어들임.
    string line;
    while(getline(fin, line)) { // fin 파일에서 한 라인 읽기
        v.push_back(line); // 읽은 라인을 벡터에 저장
    }
}

void search(vector<string>&v, string word) { // vector v에서 word를 찾아서 출력
    for(int i=0;i<v.size();i++) {
        int index = v[i].find(word);
        if(index!=-1) {
            cout << v[i] << endl;
        }
    }
}

int main() {
    vector<string> wordVector;
    ifstream fin("words.txt");
    if(!fin) {
        cout << "words.txt 파일을 열 수 없습니다." << endl;
        return 0; // 열기 오류
    }
    fileRead(wordVector,fin); // 파일 전체를 wordVector에 라인 별로 읽기
    fin.close();

    cout << "words.txt 파일을 읽었습니다. " << endl;
    while(true) {
        cout << "검색할 단어를 입력하세요 >> ";
        string word;
        getline(cin,word); // 키보드로부터 문자열 읽기
        if(word == "exit") { 
            break;
        }
        search(wordVector, word); // vecotr에서 문자열을 검색하여 출력력
    }
    cout << "프로그램을 종료합니다. " << endl;
}