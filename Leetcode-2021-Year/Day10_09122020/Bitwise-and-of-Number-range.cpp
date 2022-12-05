#include <iostream>
using namespace std;


int rangeBitwiseAnd(int m , int n)
{
	int count = 0;

	while (m != n)
	{
		count++;
		m >>= 1;
		n >>= 1;
	}

	return (m << count);
}



int main()
{
	int inp1 , inp2, result;


	cout << "Enter the numbers \n";
	cin >> inp1 >> inp2;

	result = rangeBitwiseAnd(inp1, inp2);

	cout << "The Bitwise AND of number range is " << result << endl;
	return 0;
}	
