#include <iostream>
using namespace std;


int findComplement(int num)
{
	unsigned mask = ~0;

	while(num & mask)
	{
		mask = mask << 1;
	}

	return (~num & ~mask);
}



int main()
{
	int inp, res;
	cout << "Enter the input value \n";
	cin >> inp;

	res = findComplement(inp);

	cout << "The complement of the number is " << res << endl;

	return 0;
}
