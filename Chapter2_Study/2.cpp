#include <iostream>

int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            std::cout << i <<"x" << j << "=" << i*j << "\t";
            if(j%9==0)
            {
                std::cout << "\n";
            }
        }
    }
}