#include <iostream>
#include <cstdlib>

using namespace std;

void task1() {
	float v, s, h, r1, r2, l;
	double pi = 3.1415926;
	cout << "enter the height: ";
	cin >> h; 
	cout << "enter the radius of upper base: ";
	cin >> r1;
	cout << "enter the radius of lower base: ";
	cin >> r2;
	if ((h > 0) and (r1 > 0) and (r2 > 0))
	{
		v = ((pi * h) / 3) * ((r1 * r1) + (r1 * r2) + (r2 * r2));
		cout << "V = " << v << endl;

		l = sqrt(pow((r1 - r2), 2) + pow(h, 2));
		s = pi * ((r1 * r1) + ((r1 + r2) * l) + (r2 * r2));
		cout << "S = " << s << endl;
	}
	else
	{
		cout << "wrong entered values, try again";
	}
}