#include <iostream>

using namespace std;

int checkVowels(char letter)
{
	bool isVowel = letter == 65 || letter == 69 || letter == 73 || letter == 79 || letter == 85 || letter == 89
		|| letter == 97 || letter == 101 || letter == 105 || letter == 111 || letter == 117 || letter == 121;
	if (isVowel)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int checkNonVowels(char letter)
{
	bool isNonVowel = (letter >= 66 && letter <= 90) || (letter >= 98 && letter <= 122);

	if (isNonVowel)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int letterCount;
	cin >> letterCount;
	char letter;
	int vowels = 0;
	int nonVowels = 0;

	for (int i = 0; i < letterCount; ++i)
	{
		cin >> letter;

		if (checkVowels(letter))
		{
			vowels++;
		}
		else if (checkNonVowels(letter))
		{
			nonVowels++;

		}


	}

	cout << vowels << " " << nonVowels << endl;

	return 0;
}

