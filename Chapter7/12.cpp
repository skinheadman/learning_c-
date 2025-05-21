#include <iostream>
using namespace std;

class SortedArray{
    int size;
    int *p;
    void sort();
public:
    SortedArray();
    SortedArray(SortedArray& src);
    SortedArray(int p[], int size);
    ~SortedArray();
    SortedArray operator + (SortedArray& op2);
    SortedArray& operator = (const SortedArray& op2);
    void show();
};

void SortedArray::sort() {
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            if(i<j && p[i]>p[j]) {
                int tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
}

SortedArray::SortedArray() {
    p = NULL;
    size = 0;
}

SortedArray::SortedArray(SortedArray& src) {
    this->size = src.size;
    this->p = src.p;

}

SortedArray::SortedArray(int p[], int size) {
    this->p = p;
    this->size = size;
}

