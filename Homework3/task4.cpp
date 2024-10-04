#include <iostream>
#include <cstdlib>
#include <fstream>
#include <windows.h>

using namespace std;

void task4() {
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	int i;
	char buff[40];
	ifstream fin("D:\\somedocuments\\informatika\\test4.txt");
	if (!fin.is_open()) {
		cout << "file wasn't open, try again" << endl;
	}
	else 
	{
		do 
		{
			if (fin >> i)
			{
				cout << i << endl;
			}
			else
			{
				fin.clear();
				fin.ignore(1, ' ');
			}
		}
	while (!fin.eof());
	fin.close();
	}
}