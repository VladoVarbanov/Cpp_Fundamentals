#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> result;
	string input;
	cin >> input;

	while (input != "end")
	{
		int num = 0;
		bool isNum = true;

		if (isdigit(input[input.size() - 1]))
		{
			num = stoi(input);
		}
		else
		{
			isNum = false;
		}

		if (isNum)
		{
			result.push_back(num);
		}
		else
		{
			if (input == "sum")
			{
				int a = result[result.size() - 1];
				result.pop_back();
				int b = result[result.size() - 1];
				result.pop_back();
				result.push_back(a + b);
			}
			else if (input == "subtract")
			{
				int a = result[result.size() - 1];
				result.pop_back();
				int b = result[result.size() - 1];
				result.pop_back();
				result.push_back(a - b);
			}
			else if (input == "concat")
			{
				int a = result[result.size() - 1];
				result.pop_back();
				int b = result[result.size() - 1];
				result.pop_back();
				result.push_back(stoi(to_string(b) + to_string(a)));
			}
			else if (input == "discard")
			{
				result.pop_back();
			}
		}

		cin >> input;
	}

	for (int i = 0; i < result.size(); ++i)
	{
		cout << result[i] << endl;
	}

	return 0;
}

