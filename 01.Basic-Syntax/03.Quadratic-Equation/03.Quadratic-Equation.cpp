#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;

	cin >> a >> b >> c;

	double discr = b * b - 4 * a * c;

	if (discr < 0)
	{
		cout << "no roots" << endl;
		return 0;
	}

	discr = sqrt(discr);

	cout << (-b + discr) / (2 * a);

	if (discr != 0)
	{
		cout << " " << (-b - discr) / (2 * a);
	}

	cout << endl;

	return 0;
}