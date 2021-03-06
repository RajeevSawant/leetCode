#include <iostream>
#include <string>
#include <vector>
using namespace std;


int maxProduct(vector<string>& words)
{
	vector<int> mask(words.size());
	int result = 0;


	for (int i = 0; i < words.size(); i++)
	{
		for (char c: words[i])
		{
			mask[i] |= 1 << (c - 'a');
		}

		for (int j = 0; j < i; j++)
		{
			if (!(mask[i] & mask[j]))
				result = max(result, int (words[i].size() * words[j].size()));

		}

	}

	return result;
}


int main()
{
	vector<string> words{"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};

	int result = maxProduct(words);

	cout << "The result is "<< result << endl;

	return 0;
}
