#include <iostream>
using namespace std;

class BaseMemory {
    char *mem;
    protected :
    BaseMemory(int size) { mem = new char [size];}
};

class ROM : public BaseMemory {
    
};