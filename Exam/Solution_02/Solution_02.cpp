#include <iostream>
#include <string>
#include <vector>

using namespace std;
// i can use i++;
// or i can use vector to get the input with string;
int main()
{
	int currentValue = 0;
	int previousValue = 0;
	string text;
	string oldText;
	string letter;
	int digit = 0;

	vector<string> data;
	getline(cin, oldText);
	char previos;
	for (int i = 0; i < oldText.size(); ++i)
	{
		if (oldText[i] == ' ')
		{
			continue;
		}
		if (oldText[i + 1] == ' ')
		{
			if (i != 0)
			{
				if (oldText[i - 1] != ' ')
				{
					text.push_back(oldText[i - 1]);
					text.push_back(oldText[i]);
				}
				else
				{

					text.push_back(oldText[i]);
				}
			}
			else
			{
				text.push_back(oldText[i]);
			}

		}
	}

	for (int i = 0; i < text.size(); i++)
	{
		letter = text[i];
		/*if (letter == " ")
		{
			digit = 0;
			continue;
		}
		else
		{
			digit = digit * 10 + stoi(letter);

		}*/

		if (isdigit(letter[letter.size() - 1]))
		{
			previousValue = currentValue;
			currentValue = stoi(letter);
		}
		else
		{
			if (letter == "+")
			{
				int temp = currentValue;
				currentValue += previousValue;
				previousValue = temp;
			}
			else if (letter == "*")
			{
				int temp = currentValue;
				currentValue *= previousValue;
				previousValue = temp;
			}
			else if (letter == "-")
			{
				int temp = currentValue;
				currentValue = previousValue - currentValue;
				previousValue = temp;
			}
			else if (letter == "/")
			{
				int temp = currentValue;
				currentValue /= previousValue;
				previousValue = temp;
			}
		}

	}

	cout << currentValue << " " << previousValue << endl;


	return 0;
}


