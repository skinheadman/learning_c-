#include <iostream>
using namespace std;

class Matrix
{
    int p[4];
    public :
    Matrix();
    Matrix(int n1, int n2, int n3, int n4);
    ~Matrix() { }
    Matrix operator+(Matrix b);
    Matrix& operator+=(Matrix b);
    bool operator == (Matrix b);
    void show()
    {
        cout << "Matrix = { ";
        for(int i=0; i<4;i++)
        {
            cout << p[i] << ' ';
        }
        cout << "}" << "\n";
    }
};

Matrix::Matrix()
{
    
    for(int i=0;i<4;i++)
    {
        p[i]=0;
    }
    
}

Matrix::Matrix(int n1, int n2, int n3, int n4)
{
    p[0]=n1;
    p[1]=n2;
    p[2]=n3;
    p[3]=n4;
}

Matrix Matrix::operator+(Matrix b)
{
    Matrix tmp;
    for(int i=0;i<4;i++)
    {
        tmp.p[i]=this->p[i]+b.p[i];
    }
    return tmp;
}

Matrix& Matrix::operator+=(Matrix b)
{
    for(int i=0;i<4;i++)
    {
        this->p[i]+=b.p[i];
    }
    return *this;
}

bool Matrix::operator==(Matrix b)
{
    bool arr = true;
    for(int i=0;i<4;i++)
    {
        if(this->p[i]!=b.p[i])
        {
            arr = false;
        }
    }
    return arr;
}

int main()
{
    Matrix a(1,2,3,4), b(2,3,4,5), c;
    c = a + b;
    a += b;
    a.show(); b.show(); c.show();
    if(a==c)
        cout << "a and c are the same" << "\n";
}