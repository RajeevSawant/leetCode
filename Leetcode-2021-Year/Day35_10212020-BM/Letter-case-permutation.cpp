#include <iostream>
#include <string>
#include <vector>
using namespace std;



void dfs(vector<string>& res, string s, int n, int start)
{
	
	for (int i = start; i < n; i++)
	{
		if (isdigit(s[i]))
			continue;

		s[i] = toupper(s[i]);
		res.push_back(s);
		dfs(res, s, n, i+1);
		s[i] = tolower(s[i]);
	}

}



vector<string> letterCasePermutation(string s)
{
	vector<string> res;
	
	int n = s.size();

	for (int i = 0; i < n; i++)
	{
	   s[i] = tolower(s[i]);
	}

	res.push_back(s);
	dfs(res, s, n, 0);

	return res;
}


int main()
{
	string inp;

	cout << "Enter the string \n";
	cin >> inp;

	vector<string> res = letterCasePermutation(inp);

	cout << "[ ";
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << "  ";
	}

	cout << "] " << endl;
	return 0;
}
