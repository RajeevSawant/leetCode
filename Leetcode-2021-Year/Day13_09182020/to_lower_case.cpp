#include <iostream>
#include <string>
using namespace std;


string toLowerCase(string str)
{
	for (char &c: str)
	{
		if (c >= 'A' && c <= 'Z')
			c += 32;

	}
	return str;
}



int main()
{
	string input = " ", result = " ";

	cout << "Enter the String\n";
	cin >> input;

	result = toLowerCase(input);

	cout << "The result is " << result << "\n";
	
	return 0;
}
