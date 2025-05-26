#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, T& retsize) {
    for(int i=0;i<sizeSrc;i++) {
        for(int j=0;j<sizeMinus;j++) {
            if(src[i]==minus[j]) {
                src[i] = NULL;
                retsize--;
            }
        }
    }
}