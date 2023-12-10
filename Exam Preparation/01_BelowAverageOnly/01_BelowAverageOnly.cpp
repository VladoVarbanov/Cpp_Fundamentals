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
	int arrSize;
	int arr[maxArraySize];
	enterArray(arr, arrSize);

	int sum = 0;
	for (int i = 0; i < arrSize; ++i)
	{
		sum += arr[i];
	}
	int arrAvarage = sum / arrSize;

	int evenSum = 0;
	int oddSum = 0;

	for (int i = 0; i < arrSize; ++i)
	{
		if (i % 2 == 0 && arr[i] <= arrAvarage)
		{
			evenSum += arr[i];
		}
		else if (arr[i] <= arrAvarage)
		{
			oddSum += arr[i];
		}
	}

	int result = evenSum * oddSum;

	cout << result << endl;

	return 0;
}

