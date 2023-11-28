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

void arrSumInt(int& result, int arr[], int& arrSize)
{
	for (int i = 0; i < arrSize; ++i)
	{
		result += arr[i];
	}
}

int main()
{
	int arr[maxArraySize];
	int arrSize;

	enterArray(arr, arrSize);
	int sum = 0;
	arrSumInt(sum, arr, arrSize);
	int average = sum / arrSize;

	for (int i = 0; i < arrSize; ++i)
	{
		if (arr[i] >= average)
		{
			cout << arr[i] << ' ';
		}
	}

	cout << endl;

	return 0;
}

