#include <iostream>
using namespace std;

class Statistics {
    int* array;
    int count=0;
    public :
    Statistics() {
        array = new int [10];
    }
    ~Statistics() {
        delete [] array;
    }
    bool operator ! ();
    Statistics& operator << (int array);
    Statistics& operator ~ ();
    Statistics& operator >> (int& x);

};

bool Statistics::operator ! () {
        if(!array[0]) return false;
        else return true;
    }

Statistics& Statistics::operator<<(int array) {
    this->array[count++] = array;
    return *this;
}

Statistics& Statistics::operator~() {
    for(int i=0;i<count;i++) {
        cout << array[i] << ' ';
    }
    cout << "\n";
    return *this;
}

Statistics& Statistics::operator>>(int& x) {
    for(int i=0;i<count;i++) {
        if(i==0) {
            x=array[i];
        }
        else {
            x+=array[i];
        }
    }
    x = x/count;
    return *this;
}

int main() {
    Statistics stat;
    if(!stat) cout << "현재 통계 데이터가 없습니다." << endl;

    int x[5];
    cout << "5개의 정수를 입력하라>>";
    for(int i=0;i<5;i++) cin >> x[i];
    cin.ignore();
    for(int i=0;i<5;i++) stat << x[i];
    stat << 100 << 200;
    ~stat;

    int avg;
    stat >> avg;
    cout << "avg=" << avg << endl;
}


