#include <iostream>
#include <string>
#include <vector>

using namespace std;



void backtracking(const vector<vector<char>>& table, vector<string>& res, string& local, int index, const string& digits)
{
	if (index == digits.size())
		res.push_back(local);
	else
		for (int i = 0; i < table[digits[index] - '0'].size(); i++)
		{
			local.push_back(table[digits[index] - '0'][i]);
			backtracking(table, res, local, index + 1, digits);
			local.pop_back();
		}
}


vector<string> letterCombinations(string digits)
{
	vector<string> res;

	if (digits.size() == 0) return res;
	string local;

	vector<vector<char>> table(2, vector<char>());

	table.push_back(vector<char>{'a', 'b', 'c'});
	table.push_back(vector<char>{'d', 'e', 'f'});
	table.push_back(vector<char>{'g', 'h', 'i'});
	table.push_back(vector<char>{'j', 'k', 'l'});
	table.push_back(vector<char>{'m', 'n', 'o'});
	table.push_back(vector<char>{'p', 'q', 'r', 's'});
	table.push_back(vector<char>{'t', 'u', 'v'});
	table.push_back(vector<char>{'w', 'x', 'y', 'z'});

	backtracking(table, res, local, 0, digits);
	
	return res;
}




int main()
{
	string inp;
	cout << "Enter the numbers\n";
	cin >> inp;


	vector<string> res = letterCombinations(inp);

	cout << "[ ";
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << "]\n";

	return 0;
}


