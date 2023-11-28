#include <iostream>

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
	int arrNum[10] = {};
	int arrSize;

	enterArray(arr, arrSize);
	for (int i = 0; i < arrSize; ++i)
	{
		int temp = arr[i];
		arrNum[temp]++;
	}

	size_t maxCount = arrNum[0];

	for (int i = 1; i < 10; ++i)
	{
		if (maxCount < arrNum[i])
		{
			maxCount = arrNum[i];
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		if (arrNum[i] == maxCount)
		{
			cout << i << ' ';
		}
	}
	cout << endl;


	return 0;
}

