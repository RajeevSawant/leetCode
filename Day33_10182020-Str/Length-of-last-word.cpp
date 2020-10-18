#include <iostream>
#include <string>
using namespace std;



int lengthOfLastWord(string s)
{
	int len = 0, tail = s.length() - 1;

	while(tail >= 0 && s[tail] == ' ') tail--;
	while(tail >= 0 && s[tail] != ' ')
	{
		len++;
		tail--;
	}

	return len;
}



int main()
{
	string inp;
	cout << "Enter the string\n";
	cin >> inp;

	
	int res = lengthOfLastWord(inp);

	cout << "The Length of the last word is " << res << endl;
	return 0;
}
