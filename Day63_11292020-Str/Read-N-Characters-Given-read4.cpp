#include <iostream>
using namespace std;



int read(char *buf, int n)
{

	int res = 0;

	while (n > 0)
	{
		int tmp = min(read4(buf), n);
		res += tmp;
		buf += tmp;

		if (tmp < 4)
			break;

		n -= 4;
	}

	return res;
}
