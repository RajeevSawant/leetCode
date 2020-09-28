#include <iostream>
#include <string>
using namespace std;



int strStr(string haystack, string needle)
{
	int m = haystack.size(), n = needle.size();

	for (int i = 0; i <= (m - n); i++)
	{
		int j = 0;
		for (; j < n; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == n) return i;
	}
	
	return -1;
}



int main()
{
	string inp1, inp2;


	cout << "Enter the haystack string \n";
	cin >> inp1;

	cout << "Enter the needle string \n";
	cin >> inp2;

	int result = strStr(inp1, inp2);

        cout << "The index of first occurance of needle in haystack is " << result << endl;

	return 0;
}

