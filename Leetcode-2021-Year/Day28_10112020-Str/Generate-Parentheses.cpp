#include <iostream>
#include <string>
#include <vector>
using namespace std;



void addingpar(vector<string>&v, string str, int n, int m)
{
	if (n == 0 && m == 0)
	{
		v.push_back(str);
		return;
	}


	if (m > 0) 
		addingpar(v , str+")" , n , m - 1);

	if (n > 0)
		addingpar(v, str+"(", n - 1, m + 1); 
}

vector<string> generateParenthesis(int n)
{
	vector<string> res;
	addingpar(res, "", n, 0);
	return res;
}


int main()
{
	
	int inp;
	vector<string> str;

	cout << "Enter the value of n\n";
	cin >> inp;


	str = generateParenthesis(inp);

	cout << "[  "; 
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << "  ";
	}
	cout << " ]\n";

	return 0;
}
