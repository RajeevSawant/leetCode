#include <iostream>
#include <string>
using namespace std;


bool isIsomorphic(string s, string t)
{	
	int m1[256] = {0}, m2[256] = {0}, n = s.size();

	for(int i = 0; i < n; i++)
	{
		if (m1[s[i]] != m2[t[i]]) return false;

		m1[s[i]] = i + 1;
		m2[t[i]] = i + 1;
	}
	
	return true;
}



int main()
{
	string inp1, inp2;

	cout << "Enter the strings \n";
	cin >> inp1 >> inp2;
	

	bool res = isIsomorphic(inp1, inp2);

	cout << "Is the string Isomorphic ? \n" << boolalpha << res << endl;	

	return 0;
}
