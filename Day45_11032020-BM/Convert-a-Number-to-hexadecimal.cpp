#include <iostream>
#include <string>
using namespace std;


const string HEX = "0123456789abcdef";

string toHex(int num)
{
	if (num == 0) return "0";

	string result;
	int count = 0;

	while (num && count++ < 8)
	{
		result = HEX[(num & 0xf)] + result;
		num >>= 4;
	}

	return result; 
}



int main()
{
	int inp;

	cout << "Enter the inp\n";
	cin >> inp;

	string res = toHex(inp); 

	cout << "The result is "<< res << endl;
	return 0;
}
