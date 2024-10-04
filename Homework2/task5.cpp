#include <iostream>

using namespace std;

void task5() {
	float x, y;
	for (x = -4; x <= 4; x += 0.5)
	{
		if (x == 1)
		{
			cout << "x = 1, division by zero" << endl;
		}
		else
		{
			y = ((x * x) - (2 * x) + 2) / (x - 1);
			cout << "if x = " << x << ", y = " << y << endl;
		}
	}
}