#include <iostream>
using namespace std;


uint32_t reverseBits (uint32_t n)
{
        uint32_t m;

        // if you do this only until n exist then the last elements wont be populated with 0 in the result.
        // Make sure you shift the n
        for (int i = 0; i < 32; i++, n >>= 1)
        {
            // We want to shift the m once every loop to move the bit ahead.
            m <<= 1;

            // We check if the bit position of n is 1 or not , if it is then or with m and result is stored in m.
            m |= n & 0x01;
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

