#include <iostream>
#include <string>
#include <vector>

using namespace std;

string makeWagon(string word)
{
	if (word == "empty")
	{
		return " |";
	}
	return word + "|";
}

void printTrain(vector<string> train)
{
	for (int i = 0; i < train.size(); ++i)
	{
		cout << train[i];
	}
	cout << endl;
}


int main()
{
	string word;
	getline(cin, word);
	vector<string> train = { "|" };

	while (word != "end")
	{
		train.push_back(makeWagon(word));
		getline(cin, word);
	}
	getline(cin, word);

	while (word[0] != 'E')
	{
		if (word[0] == 'P')
		{
			printTrain(train);
		}
		else if (word[0] == 'M')
		{
			int target = int(word[2] - '0');
			int place = int(word[4] - '0');

			vector<string>newTrain = { "|" };
			for (int i = 1; i < train.size(); ++i)
			{
				if (i == place)
				{
					newTrain.push_back(train[target]);
					newTrain.push_back(train[i]);
					continue;
				}
				if (i == target)
				{
					continue;
				}
				newTrain.push_back(train[i]);
			}

			for (int i = 1; i < train.size(); ++i)
			{
				train[i] = newTrain[i];
			}

			printTrain(newTrain);
		}
		else if (word[0] == 'L')
		{
			int target = int(word[2] - '0');
			vector<string>newTrain = { "|" };
			for (int i = 0; i < train.size(); ++i)
			{
				if (i == target)
				{
					continue;
				}
				newTrain.push_back(train[i]);
			}

			for (int i = 1; i < train.size(); ++i)
			{
				train[i] = newTrain[i];
			}
			train.erase(train.begin());
			printTrain(train);
		}


		getline(cin, word);
	}


	return 0;
}
