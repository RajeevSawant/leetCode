#include <iostream>
#include <string>
using namespace std;


int numDecodings(string s)
{
	const int n = s.length();

	if (!n || s[0] == '0')
	{	
		return 0;
	}
	else if (n == 1 && (s[0] < '0' || s[0] > '9'))
	{
		return 0;
	}


	int pre = 1, next = 1, res = 1;

	for (int i = 1; i < n; ++i)
	{
		if (s[i] == '0')
		{
			next = 0;
		}

		if (!((s[i - 1] == '1') || (s[i - 1] == '2') && (s[i] <= '6')))
		{
			pre = 0;
		}
		
		res = pre + next;
		pre = next;
		next = res;
	}

	return res;
}



int main()
{
	string s;

	cout << "Enter the string \n";
	cin >> s;

	int res = numDecodings(s);	

	cout << "The result is " << res << endl;
	return 0;
}

