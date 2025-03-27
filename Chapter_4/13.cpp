#include <iostream>
#include <string>
using namespace std;

class Histogram
{
    string s;
    public :
    Histogram() {}
    Histogram(string first);
    void putc(string s);
    void put(string s);
    void print();
};

Histogram::Histogram(string first)
{
    s=first;
}

void Histogram::putc(string s)
{
    this->s.append(s);
}

void Histogram::put(string s)
{
    this->s.append(s);
}

void Histogram::print()
{   
    int sArray[26] = {0};
    char alpha='a';
    int num =0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            sArray[s[i]-'a']++;
            //cout << "i";
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            sArray[s[i]-'A']++;
            //cout <<"j";
        }
    }
    while(true)
    {
        cout << alpha << " (" << sArray[num] << ")" << "\t" << ": ";
        for(int i=0;i<sArray[num];i++)
        {
            cout << "*";
        }
        cout << "\n";
        if(alpha=='z') break;
        num++;
        alpha++;
    }
}

int main()
{
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc("-");
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();
}