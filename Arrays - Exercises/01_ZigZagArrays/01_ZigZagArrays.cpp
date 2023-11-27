#include <iostream>

using namespace std;

int main()
{
	const int MAX_SIZE = 99;
	int arrayTwo[MAX_SIZE] = {};
	int arrayOne[MAX_SIZE] = {};
	int actualSize;
	cin >> actualSize;

	for (int i = 0; i < actualSize; ++i)
	{
		int n1, n2;
		cin >> n1 >> n2;

		if (i % 2 == 0)
		{
			arrayOne[i] = n1;
			arrayTwo[i] = n2;
		}
		else
		{
			arrayOne[i] = n2;
			arrayTwo[i] = n1;
		}
	}
	for (int i = 0; i < actualSize; ++i)
	{
		cout << arrayOne[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < actualSize; ++i)
	{
		cout << arrayTwo[i] << " ";
	}
	cout << endl;
	return 0;
}

