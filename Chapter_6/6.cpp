#include <iostream>
#include <cstring>
using namespace std;

class ArrayUtility2
{
    private :
    public :
    static int* concat(int s1[], int s2[], int size);
    static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size)
{
    int* nArray = new int [size*2];
    int count = 0;
    for(int i=0;i<size;i++)
    {
        nArray[count++]=s1[i];
    }
    for(int i=0;i<size;i++)
    {
        nArray[count++]=s2[i];
    }
    return nArray;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize)
{
    int *nArray = new int [size];
    int count = 0;
    for(int i=0;i<size;i++)
    {
        int j=0;
        for(j = 0;j<size;j++)
        {
            if(s1[i]==s2[j]) 
            {
                count++;
                break;
            }
        }
        if(j==size)
        {
            nArray[i]=s1[i];
        }
        
    }
    retSize=size-count;
    if(retSize==0)
    {
        cout << "NULL";
        return 0;
    }
    return nArray;
}


int main()
{
    int size = 5;
    int retsize = 0;
    int x[5];
    int y[5];
    int *cArray = new int [size*2];
    int *retArray = new int [retsize];

    cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
    for(int i=0;i<size;i++)
    {
        cin >> x[i];
    }
    cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
    for(int i=0;i<size;i++)
    {
        cin >> y[i];
    }
    cout << "합친 정수 배열을 출력한다." << "\n";
    cArray=ArrayUtility2::concat(x,y,size);
    for(int i=0;i<size*2;i++)
    {
        cout << cArray[i] << " ";
    }
    cout << "\n";
    retArray = ArrayUtility2::remove(x,y,size,retsize);
    cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retsize << "\n";
    for(int i=0;i<retsize;i++)
    {
        cout << retArray[i] << " ";
    }



}