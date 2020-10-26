#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;



vector<vector<string> > groupAnagrams(vector<string>& strs)
{
	vector<vector<string>> y;


	if (strs.size() == 0) return y;

	map<string, vector<string> > dict;

	for (string s: strs)
	{
		string sorted = s;
		sort(sorted.begin(), sorted.end());
		dict[sorted].push_back(s);
	}

	map<string, vector<string> > :: iterator o = dict.begin();

	while(o != dict.end())
	{
		y.push_back(o -> second);
		o++;
	}

	return y;
}


int main()
{
	vector<string> str {"eat", "tea", "tan", "ate", "nat", "bat"};

	vector<vector<string> > res = groupAnagrams(str);


	cout << "[ ";
	for (int i = 0; i < res.size(); i++)
	{
		for (int j = 0; j < res[i].size(); j++)
		{
			cout << "[ ";
			cout << res[i][j] << " "; 
			cout << "] ";
		}
	}
	cout << "] \n";
	return 0;
}
