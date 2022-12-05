#include <iostream>
using namespace std;


bool isHappy(int n)
{
	int res = 0, sum = 0;

	while(n)
	{
		res = n % 10;
		sum += (res * res);
		n = n / 10;
	}

	if (sum == 1)
	{
	    return true;
	}
	else if (sum == 4)
	{
	    return false;
	}
	else
	{
	    return isHappy(sum);
	}
}


int main()
{
	int inp;

	cout << "Enter the number\n";
       	cin >> inp;	
	
	cout << "The result is " << boolalpha << isHappy(inp) << endl;

	return 0;
}
