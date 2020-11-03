#include <iostream>
using namespace std;


    uint32_t reverseBits(uint32_t n) {
        
        uint32_t m = 0;
        
        // go to from bit 0 to bit 31, shift n to the left by 1 after loop
        for (int i = 0; i < 32; i++, n >>= 1)
        {
            // shift to the right by 1
            m <<= 1;
            
            // what ever the bit value of n is present or it with m 
            m |= n & 0x01;
        }
        
        // return m
        return m;
    }


int main()
{
	uint32_t ip = 43261596;
	
	cout << "Input is " << ip << endl;
	cout << "Output is " <<reverseBits(ip) << endl;
	return 0;
}

