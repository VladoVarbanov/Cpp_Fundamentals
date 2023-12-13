#include <iostream>
#include <sstream>
#include <list>

using namespace std;

int main()
{
	int N;
	cin >> N;
	cin.ignore(); // ignore all till the end of the line.

	list<string> products;
	for (int c = 0; c < N; ++c)
	{
		string product;
		getline(cin, product);
		products.push_back(product);
	}

	products.sort();

	int idx = 1;
	list<string>::iterator it = products.begin();
	for (; it != products.end(); it++, idx++)
	{
		cout << idx << '.' << *it << endl;
	}

	return 0;
}