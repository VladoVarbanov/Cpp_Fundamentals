#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int max_number = INT_MIN;
	int min_number = INT_MAX;

	for (int i = 1; i <= n; ++i)
	{
		int current;
		cin >> current;
		if (current > max_number)
		{
			max_number = current;
		}

		if (current < min_number)
		{
			min_number = current;
		}
	}

	cout << min_number << ' ' << max_number << endl;


	return 0;
}
