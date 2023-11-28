#include <iostream>

using namespace std;

#define MAX_SIZE 100

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

	int n;
	cin >> n;

	int arr1[MAX_SIZE], arr2[MAX_SIZE];

	int* first = arr1;
	int* second = arr2;

	for (int cnt = 0; cnt < n; ++cnt)
	{
		int a, b;
		cin >> a >> b;

		first[cnt] = a;
		second[cnt] = b;

		// swap first and second.
		int* temp = first;
		first = second;
		second = temp;
	}

	printArray(first, n);
	printArray(second, n);

	return 0;
}

