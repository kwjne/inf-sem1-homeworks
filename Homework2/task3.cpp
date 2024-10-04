#include <iostream>
#include <cstdlib>

using namespace std;

void task3() {
	float x, y, b, z;
	cout << "enter x: ";
	cin >> x;
	cout << "enter y: ";
	cin >> y;
	cout << "enter b: ";
	cin >> b;
	if (((b - y) > 0) and ((b - x) >= 0))
	{
		z = (log(b - y)) * (sqrt(b - x));
		cout << "z = " << z;
	}
	else if ((b-y) <= 0)
	{
		cout << "b-y <= 0, wrong entered values, try again";
	}
	else
	{
		cout << "b-x < 0, wrong entered values, try again";
	}
}