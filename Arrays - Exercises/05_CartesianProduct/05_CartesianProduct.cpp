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

void print(int num, int arrSize, int arr[])
{
	for (int i = 0; i < arrSize; ++i)
	{
		cout << num * arr[i] << ' ';
	}
}

int main()
{
	int arr[maxArraySize];
	int arrSize;
	enterArray(arr, arrSize);

	for (int i = 0; i < arrSize; ++i)
	{
		print(arr[i], arrSize, arr);
	}
	cout << endl;

	return 0;
}

