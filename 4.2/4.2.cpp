#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#pragma warning (disable : 4996)
using namespace std;

void CreateTXT(char* fname)
{
	ofstream fout(fname);
	char ch;
	string s;
	do
	{
		cin.get();
		cin.sync();
		cout << "enter line: "; getline(cin, s);
		fout << s << endl;
		cout << "continue? (y/n): "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << endl;
}

void PrintTXT(char* fname)
{
	ifstream fin(fname);
	string s;
	while (getline(fin, s))
	{
		cout << s << endl;
	}
	cout << endl;
}

int countWord(char* fname)
{
	ifstream fin(fname);
	char* w;
	int k = 0;
	string s;
	while (getline(fin, s))
	{
		for (int i = 0; i < s.length(); i++)
			if (s[i+1] == 'b'&& s[i] == ' ')
				k++;

	}



	
		
	

	return k;
}
int main()
{
	char fname[1] = { 't' };
	CreateTXT(fname);
	PrintTXT(fname);
	cout << "Word for b = " << countWord(fname);


	return 0;
}