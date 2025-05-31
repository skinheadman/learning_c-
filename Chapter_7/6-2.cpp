#include <iostream>
using namespace std;

class Matrix;
Matrix operator+(Matrix a, Matrix b);
Matrix& operator+=(Matrix& a, Matrix b);
bool operator == (Matrix a, Matrix b);

class Matrix
{
    int p[4];
    public :
    Matrix();
    Matrix(int n1, int n2, int n3, int n4);
    ~Matrix() { }
    friend Matrix operator+(Matrix a, Matrix b);
    friend Matrix& operator+=(Matrix& a, Matrix b);
    friend bool operator == (Matrix a, Matrix b);
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

Matrix operator+(Matrix a, Matrix b)
{
    
    for(int i=0;i<4;i++)
    {
        a.p[i]+=b.p[i];
    }
    return a;
}

Matrix& operator+=(Matrix &a, Matrix b)
{
    for(int i=0;i<4;i++)
    {
        a.p[i]+=b.p[i];
    }
    return a;
}

bool operator==(Matrix a, Matrix b)
{
    bool arr = true;
    for(int i=0;i<4;i++)
    {
        if(a.p[i]!=b.p[i])
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