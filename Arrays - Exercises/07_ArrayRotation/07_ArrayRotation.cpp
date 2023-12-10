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

void printArray(int arr[], int size, string separator = " ")
{
	for (int cnt = 0; cnt < size; ++cnt)
	{
		cout << arr[cnt] << separator;
	}
	cout << endl;
}

int main()
{
	int arr[maxArraySize];
	int arrSize;
	enterArray(arr, arrSize);
	int countRotations;
	cin >> countRotations;

	for (int i = 0; i < countRotations; ++i)
	{
		int temp = arr[0];
		for (int j = 1; j < arrSize; ++j)
		{
			arr[j - 1] = arr[j];
		}
		arr[arrSize - 1] = temp;
	}

	printArray(arr, arrSize);

	return 0;
}

