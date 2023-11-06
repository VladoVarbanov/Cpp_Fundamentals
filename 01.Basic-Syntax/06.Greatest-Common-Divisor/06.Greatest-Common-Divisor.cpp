#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;

	int finalNumber;
	if (a > b)
	{
		finalNumber = b;
	}
	else
	{
		finalNumber = a;
	}

	int gcd = 0;

	for (int i = 1; i <= finalNumber; ++i)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			gcd = i;
		}
	}

	cout << gcd << endl;

	return 0;
}