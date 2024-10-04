#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

void task2() 
{
	float x, a, w;
	cout << "enter x: ";
	cin >> x;
	cout << "enter a: ";
	cin >> a;
	if ((fabs(x) < 1) and (x != 0))
	{
		w = a * log(fabs(x));
		cout << "w = " << w;
	}
	else if (x == 0)
	{
		cout << "wrong entered, log 0";
	}
	else
	{
		if (((a - (x * x)) >= 0))
		{
			w = sqrt(a - (x * x));
			cout << "w = " << w;
		}
		else
		{
			cout << "a - x^2 < 0, wrong entered values";
		}
	}
}