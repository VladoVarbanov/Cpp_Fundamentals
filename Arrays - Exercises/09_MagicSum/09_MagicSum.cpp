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

void magicNumbers(int num, int arr[], int arrSize, int magicSum)
{
	for (int j = num + 1; j < arrSize; ++j)
	{
		if (arr[num] + arr[j] == magicSum)
		{
			cout << arr[num] << ' ' << arr[j] << endl;
		}
	}
}

int main()
{
	int arr[maxArraySize];
	int arrSize;
	enterArray(arr, arrSize);

	int magicSum;
	cin >> magicSum;

	for (int i = 0; i < arrSize; ++i)
	{
		magicNumbers(i, arr, arrSize, magicSum);
	}

	return 0;
}

