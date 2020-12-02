#include <iostream>
#include <string>
using namespace std;


string convertToTitle(int n)
{
	string res;

	while(n)
	{
		res = char((n - 1) % 26 + 'A') + res;
		n = (n - 1) / 26;
	}

	return res;
}



int main()
{
	int inp;
	cout << "Enter the col number \n";
	cin >> inp;

	string res = convertToTitle(inp);

	cout << "\nThe result is " << res << endl;
	return 0;
}
