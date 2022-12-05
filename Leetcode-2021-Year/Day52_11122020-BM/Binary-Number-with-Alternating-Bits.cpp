#include <iostream>
using namespace std;



/*
 
For example, take n = 1010 in binary

long long m = n >> 1; - we create an m and assign it to n right shifted by 1
m = 0101

return ((m + n) & (m + n + 1)) == 0;

the sum (m + n) = 0101 + 1010 = 1111
m + n + 1 = 10000

by &ing the two sums, we get 10000 & 01111 = 0

if n did not have alternating bits, then this last step would not return 0
  
*/


bool hashAlternatingBits(int n)
{
	long long m = n >> 1;

	return ((m + n) & (m + n + 1)) == 0;

}
