#include <iostream>
using namespace std;

class SortedArray {
    int size;
    int* p;
    void sort();
public:
    SortedArray();
    SortedArray(SortedArray& src);
    SortedArray(int p[], int size);
    ~SortedArray();
    SortedArray operator+(SortedArray op2);
    SortedArray& operator=(const SortedArray& op2);
    void show();
};

void SortedArray::sort() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (p[i] > p[j]) {
                int tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
}

SortedArray::SortedArray() {
    p = nullptr;
    size = 0;
}

SortedArray::SortedArray(SortedArray& src) {
    size = src.size;
    p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = src.p[i];
    }
}

SortedArray::SortedArray(int arr[], int size) {
    this->size = size;
    p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = arr[i];
    }
    sort();
}

SortedArray::~SortedArray() {
    delete[] p;
}

SortedArray SortedArray::operator+(SortedArray op2) {
    int newSize = size + op2.size;
    int* newArr = new int[newSize];
    for (int i = 0; i < size; i++) newArr[i] = p[i];
    for (int i = 0; i < op2.size; i++) newArr[size + i] = op2.p[i];

    SortedArray result(newArr, newSize);
    delete[] newArr;
    return result;
}

SortedArray& SortedArray::operator=(const SortedArray& op2) {
    if (this == &op2) return *this;

    delete[] p;
    size = op2.size;
    p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = op2.p[i];
    }
    return *this;
}

void SortedArray::show() {
    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    int n[] = { 2, 20, 6 };
    int m[] = { 10, 7, 8, 30 };
    SortedArray a(n, 3), b(m, 4), c;

    c = a + b;

    a.show(); // 2 6 20
    b.show(); // 7 8 10 30
    c.show(); // 2 6 7 8 10 20 30 (정렬된 상태)
}
