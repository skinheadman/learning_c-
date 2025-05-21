#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout << "Number";
    cout.width(21);
    cout << "Square";
    cout.width(25);
    cout << "Square Root" << "\n";
    for(int i=0; i<10; i++) {
        int n = i*5;
        cout << n;
        cout.fill('_');
        cout.width(15);
        cout << n*n;
        cout.fill('_');
        cout.width(15);
        cout.precision(4);
        cout << sqrt(n);
        cout.fill('_');
        cout.width(15);
        cout << "\n";
    }
}