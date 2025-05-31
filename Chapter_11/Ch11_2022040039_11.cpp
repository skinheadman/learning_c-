#include <iostream>
using namespace std;

istream& pos(istream& in) {
    cout << "위치는? ";
    return in;
}

int main() {
    int x, y;
    cin >> pos >> x;
    cin >> pos >> y;
    cout << x << "," << y << endl;
}