#include <iostream>
using namespace std;
int main()
{
	int start, end;

	cin >> start >> end;

	int sum = 0;

	for (int current = start; current <= end; ++current)
	{
		cout << current << ' ';
		sum += current;
	}

	cout << endl << "Sum: " << sum << endl;

	return 0;
}