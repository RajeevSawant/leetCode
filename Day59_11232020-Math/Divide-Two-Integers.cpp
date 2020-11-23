#include <iostream>
using namespace std;



int divide(int dividend, int divisor)
{
	
	if (!divisor || (dividend == INT_MIN && divisor == -1))
		return INT_MAX;

	int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

	long long dvd = labs(dividend);
	long long dvr = labs(divisor);

	int res = 0;

	while(dvd >= dvr)
	{
		
		long long temp = dvr, multiple = 1;

		while(dvd >= dvr)
		{
			long long temp = dvr, multiple = 1;
			while(dvd >= (temp << 1))
			{
				temp = temp << 1;
				multiple <<= 1;
			}

			dvd -= temp;
			res += multiple;
		}

	}

	return sign == 1 ? res : -res;
}




