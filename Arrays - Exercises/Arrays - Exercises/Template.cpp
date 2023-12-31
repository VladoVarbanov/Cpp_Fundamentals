#include <iostream>

using namespace std;

const int maxArraySize = 100;

void printArray(int arr[], int size, string separator = " ")
{
	for (int cnt = 0; cnt < size; ++cnt)
	{
		cout << arr[cnt] << separator;
	}
	cout << endl;
}

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

	return 0;
}

