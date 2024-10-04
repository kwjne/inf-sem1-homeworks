#include <iostream>
#include <cstdlib>
#include <fstream>
#include <windows.h>

using namespace std;

void task3() {
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	char buff[40];
	ifstream fin("D:\\somedocuments\\informatika\\test3.txt");
	if (!fin.is_open()) {
		cout << "file wasn't open, try again" << endl;
	}
	else {
		while (!fin.eof()) {
			fin.getline(buff, 40);
			cout << buff << endl;
		}
		fin.close();
	}
}