#include <iostream>
#include <climits>

using namespace std;

const int maxArraySize = 100;

void enterArray(int arr[], int& arrSize)
{
	cin >> arrSize;

	if (arrSize > maxArraySize)
	{
		cout << "Buffer too small. Needed: " << arrSize << endl;
		exit(1);
	}

	for (size_t c = 0; c < arrSize; c++)
	{
		cin >> arr[c];
	}
}

int main()
{
	int arr[maxArraySize];
	int arrSize;
	enterArray(arr, arrSize);

	int absolute = INT_MAX;

	if (arrSize == 1)
	{
		absolute = 0;
	}

	for (int i = 0; i < arrSize; ++i)
	{
		for (int j = i + 1; j < arrSize; ++j)
		{

			int temp = abs(arr[j] - arr[i]);
			if (temp < absolute)
			{
				absolute = temp;
			}
		}

	}

	cout << absolute << endl;

	return 0;
}

