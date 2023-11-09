#include <iostream>
#include <string>

using namespace std;

string otput(int number)
{
	string sign = "";
	if (number > 0)
	{
		sign = "positive";
	}
	else if (number < 0)
	{
		sign = "negative";

	}
	else if (number == 0)
	{
		sign = "zero";
	}

	return sign;
};

int main()
{
	int n;
	cin >> n;

	cout << "The number " << n << " is " << otput(n) << "." << endl;

	return 0;
}