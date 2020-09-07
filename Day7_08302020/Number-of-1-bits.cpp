#include <iostream>
using namespace std;



int hammingWeight(uint32_t n)
{
	
	uint32_t m  = n;
	int count = 0;

	while (m)
	{
		if (m & 1)
	 		count++;

		m >>= 1;	
	}
	
	return count;
}




int main()
{
	uint32_t inp = 5;

	cout << "The hamming Weight is " << hammingWeight(inp) << endl;

	return 0;
}
