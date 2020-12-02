#include <iostream>
using namespace std;


int mysqrt(int x)
{
	long r = x;

	while(r * r > x)
	{
		r = (r + x/r)/2;
	}
	
	return r;
}
