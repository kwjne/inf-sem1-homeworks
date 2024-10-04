#include <iostream>
#include <cstdlib>

using namespace std;

void task4() {
	float N;
	cout << "enter N: ";
	cin >> N;
	if (N > 0)
	{
		for (int i = N; i <= N + 9; i++)
		{
			cout << i << endl;
		}
	}
	else
	{
		cout << "please, enter natural value";
	}
}