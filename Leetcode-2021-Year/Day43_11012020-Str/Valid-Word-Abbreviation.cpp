#include <iostream>
#include <string>
using namespace std;


bool validWordAbbreviation(string word, string abbr)
{
	int i = 0, j = 0;

	while (i < word.size() && j < abbr.size())
	{
		if (isdigit(abbr[j]))
		{
			if (abbr[j] == '0') return false;

			int val = 0;

			while(j < abbr.size() && isdigit(abbr[j]))
				val = val * 10 + abbr[j++] - '0';

			i += val;
		}
		else if(word[i++] != abbr[j++])
		{
			return false;
		}
	}

	return i == word.size() && j == abbr.size();

}

int main()
{

	string s = "apple", abbr = "a3e";

	cout << "The result is " << boolalpha <<validWordAbbreviation(s, abbr) << endl;

	return 0;
}
