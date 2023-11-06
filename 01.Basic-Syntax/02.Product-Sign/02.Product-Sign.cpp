#include <iostream>
using namespace std;
int main()
{
	double d1, d2, d3;

	cin >> d1 >> d2 >> d3;

	double result = d1 * d2 * d3;

	if (result >= 0)
	{
		cout << '+' << endl;
	}
	else {
		cout << '-' << endl;
	}

	return 0;
}

