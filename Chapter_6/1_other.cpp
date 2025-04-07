#include <iostream>
using namespace std;

int add(int a[], const int b, int *c={0}) {
    int total = 0;
        for (int i = 0; i < b; i++) {
            cout << a[i] << c[i] ;
        }

    return total;

}



int main() {
    int a[] = { 1,2,3,4,5 };
    int b[] = { 6,7,8,9,10 };
    int c = add(a, 5);
    int d = add(a, 5, b);
    cout << c <<"\n";
    cout << d;
    return 0;
}