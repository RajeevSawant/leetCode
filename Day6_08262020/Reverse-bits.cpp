#include <iostream>
using namespace std;


uint32_t reverseBits (uint32_t n)
{
	uint32_t m;

	for (int i = 0; i < 32; i++, n >>= 1)
	{
		m <<= 1;
		m |= n & 1;
	}
	
	return m;
}



int main()
{
	uint32_t ip = 43261596;
	
	cout << "Input is " << ip << endl;
	cout << "Output is " <<reverseBits(ip) << endl;
	return 0;
}

