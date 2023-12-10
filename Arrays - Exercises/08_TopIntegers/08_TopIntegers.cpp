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
	int arrSize;
	enterArray(arr, arrSize);

	bool isBig;
	for (size_t i = 0; i < arrSize; ++i)
	{
		for (int j = i + 1; j <= arrSize; ++j)
		{
			if (arr[i] <= arr[j])
			{
				isBig = false;
				break;
			}
			isBig = true;
		}
		if (isBig)
		{
			cout << arr[i] << ' ';
		}
	}
	cout << endl;

	return 0;
}