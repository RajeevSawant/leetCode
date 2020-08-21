#include <iostream>
#include <stack>
using namespace std;



bool isValid(string s)
{
	stack<char> str;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '{' || s[i] == '[' || s[i] == '(')
		{
			str.push(s[i]);
		}
		else
		{
			if (str.empty()) return false;
			if (s[i] == '}' && str.top() != '{') return false;
			if (s[i] == ']' && str.top() != '[') return false;
			if (s[i] == ')' && str.top() != '(') return false;
			str.pop();
		}

	}

	if (str.empty()) return true;

	return false;
}


int main()
{
	string s;

	cout << "Enter the Paranthesis to be checked \n";
	cin >> s;

	cout << "\nEntered string is  " << s <<endl; 
	cout << "Are the Paranthesis valid ? \n" << std::boolalpha<<isValid(s) << endl;

	return 0;
}
