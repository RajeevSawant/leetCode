

#include <iostream>
using namespace std;




int Atoi(string str)
{
	int i = 0, sign = 1, ret = 0, base = INT_MAX/10;
	while (str[i] == ' ') i++;


	if (str[i] == '+' || str[i] == '-')
	{
		sign = (str[i++] == '-') ? -1 : 1;
	}


	while (isdigit(str[i]))
	{
		if (ret > base || (ret == base && str[i] - '0' > 7))
			return sign > 0 ? INT_MAX : INT_MIN;

		ret = 10 * ret + (str[i++] - '0');
	}
	
	return sign * ret;
}




int main()
{
	string s = "   -42";

	cout << "The corresponding integer is  "<< Atoi(s) << endl;

	return 0;
}
