#include <iostream>
using namespace std;



unsigned int swapBits(unsigned int nums)
{
	/*
	 *	1. Create a mask for even, use same for odd by shifting to right by 1. 
	 *	2. OR the value with num.
	 */


	unsigned int mask = 0x55555555;
	unsigned int odd = mask & nums;
	unsigned int even = nums & ~(mask);

	return ((odd << 1) | (even >> 1));

}



int main()
{
	unsigned int num = 0, result = 0;
	
	//cout << "Enter the value\n";
	//cin >> num;

	result = swapBits(num);

	cout << "Result is " << result << endl;
	return 0;
}
