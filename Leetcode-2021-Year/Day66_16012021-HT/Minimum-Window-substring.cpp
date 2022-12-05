#include <iostream>
#include <string>
using namespace std;



string minWindow(string s, string t)
{
	if (s.size() == 0 || t.size() == 0)
		return "";

	int tablecount[128];
	string res;
	
	for (char c: t)
	{
		++tablecount[c];
	}


	int left = 0, count = 0, minLen = INT_MAX;

	for (int right = 0; right < s.length(); ++right)
	{
		if (--tablecount[s[right]] >= 0)
			count++;

		while(count == t.length())
		{
			if (minLen > right - left + 1)
			{
				minLen = right - left + 1;
				res = s.substr(left, right + 1);
			}

			if (++tablecount[s[left]] > 0)
				--count;
			
			++left;
		}
		
	}


	return res;
}





// Youtube: https://www.youtube.com/watch?v=0GOyCIJ2ajQ

