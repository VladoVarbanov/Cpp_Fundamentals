#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;

	getline(cin, input);
	cout << input[0];

	for (int i = 1; i < input.size(); ++i)
	{
		char temp = input[i - 1];
		if (input[i] != temp)
		{
			cout << input[i];
			continue;
		}

		if (input[i] == 'a')
		{
			cout << input[i];
		}
		else if (input[i] == 'e')
		{
			cout << input[i];
		}
		else if (input[i] == 'i')
		{
			cout << input[i];
		}
		else if (input[i] == 'o')
		{
			cout << input[i];
		}
		else if (input[i] == 'u')
		{
			cout << input[i];
		}

	}

	cout << endl;

	return 0;
}

