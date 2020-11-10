#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;



bool wordPattern(string pattern, string str)
{
	map<char, int> p2i;
	map<string, int> w2i;

	
	istringstream in(str);

	int i = 0, n = pattern.size();


	for (string word; in >> word; ++i)
	{
		if(i == n || p2i[pattern[i]] != w2i[word])
			return false;

		p2i[pattern[i]] = w2i[word] = i + 1;
	}

	return (i == n);
}



int main()
{
	string pattern = "abba";
	string s = "dog cat cat dog";

	bool res = wordPattern(pattern, s);

	cout << "The result is " << boolalpha << res << endl;

	return 0;
}
