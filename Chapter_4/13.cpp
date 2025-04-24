#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Histogram
{
	int* arr;
	string text;
public :
	Histogram(string text);
	void put(string text);
	void putc(string c);
	void print();
};

Histogram::Histogram(string text)
{
	this->text = text;
	this->text.append("\n");
}

void Histogram::put(string text)
{
	this->text.append(text);
}

void Histogram::putc(string c)
{
	this->text.append(c);
}

void Histogram::print()
{
	arr = new int[26];
	for (int i = 0; i < 26; i++)
	{
		arr[i] = 0;
	}
	cout << text << "\n";
	int count = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] >= 'A' && text[i] <= 'Z')
		{
			char sub = tolower(text[i]);
			text[i] = sub;
		}
		if (text[i] >= 'a' && text[i] <= 'z')
		{
			count++;
			arr[text[i] - 'a']++;
		}
	}
	cout << "총 알파벳 수 " << count;
	cout << "\n";
	for (int i = 0; i < 26; i++)
	{
		cout << "a" + i << " " << "(" << arr[i] << ")" << "\t" << ": ";
		for (int j = 0; j < arr[i]; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	delete[] arr;
}

int main()
{
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc("-");
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}