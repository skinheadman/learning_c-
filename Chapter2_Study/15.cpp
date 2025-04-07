#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int num;
    int num2;
    char op;
    while(true)
    {
        int count = 0;
        char num_array[100] = " ";
        char mArray[100] = " ";
        cout << "? ";
        cin.getline(mArray,100);
        for(int i=0;mArray[i]!=' ';i++)
        {
            num_array[i]=mArray[count++];
        }
        num=atoi(num_array);
        op = mArray[++count];
        num2=atoi(mArray+count+1);
        if(op=='+')
        {
            cout << mArray << " = " << num+num2 << "\n";
        }
        else if(op=='-')
        {
            cout << mArray << " = " << num-num2 << "\n";
        }
        else if(op=='*')
        {
            cout << mArray << " = " << num*num2 << "\n";
        }
        else if(op=='/')
        {
            cout << mArray << " = " << num/num2 << "\n";
        }
        else if(op=='%')
        {
            cout << mArray << " = " << num%num2 << "\n";
        }
        else break;
    }
}