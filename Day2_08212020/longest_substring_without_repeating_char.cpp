#include <iostream>
#include <vector>
using namespace std;


int lengthOfLongestSubstring(string s)
{
	vector<int> dict(256, -1);
	int start = -1 , maxLen = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (dict[s[i]] > start)
		{
			start = dict[s[i]];
		}

		dict[s[i]] = i;
		maxLen = max (maxLen, i - start);
	}

	return maxLen;
}


int main()
{
	string s;

	cout << "Enter the string \n";
	cin >> s;


	cout << "Length of the Longest Substring is " << lengthOfLongestSubstring(s) << endl;

	return 0;
}
