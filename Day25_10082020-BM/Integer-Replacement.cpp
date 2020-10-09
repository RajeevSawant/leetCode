#include <iostream>
using namespace std;



int res = 0;

int integerReplacement(int n)
{
	
	if (n == 1)
		return res;

	if (n == 3)
		return res += 2;

	if (n == INT_MAX)
		return 32;

	res++;

	if (n & 1)
	{
		
		if ((n % 4) == 0)
		{
			return integerReplacement(n + 1);
		}
		else
		{
			return integerReplacement(n - 1);
		}
	}
	else
	{
		return integerReplacement(n/2);
	}
	
}



int main()
{

	int inp = 0, res = 0;

	cout << "Enter the Input number \n";
	cin >> inp;


	res = integerReplacement(inp);

	cout << "The Minimum number of Replacements needed " << res << endl;

	return 0;
}

