#include <iostream>
using namespace std;

class BaseMemory {
    char *mem;
    int size;
    protected :
    BaseMemory(int size) { 
        this->size = size;
        mem = new char [size];
    }
    ~BaseMemory() {
        delete [] mem;
    }
    public :
    char* getmem() {
        return mem;
    }
    char read(int n) {
        return mem[n];
    }
    void save(char n, int i) {
        mem[i] = n;
    }
};

class ROM : public BaseMemory {
    int memorysize;
    public : 
    ROM(int msize, char* x, int size) : BaseMemory(msize) {
        this->memorysize = msize;
        for(int i=0;i<size;i++) {
            save(x[i],i);
        }
    }
};

class RAM : public BaseMemory {
    int memorysize;
    char* mem;
    public:
    RAM(int msize) : BaseMemory(msize) {
        memorysize = msize;
        mem = new char [msize];
    }
    void write(int num, char mem2) {
        save(mem2, num);
    }
};

int main() {
    char x[5] = {'h', 'e', 'l', 'l', 'o'};
    ROM biosROM(1024*10, x, 5);
    RAM mainMemory(1024*1024);
    for(int i=0;i<5;i++) mainMemory.write(i, biosROM.read(i));
    for(int i=0;i<5;i++) cout << mainMemory.read(i);
}