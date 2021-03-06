#include <iostream>
using namespace std;

int numberOfSteps(int num)
{
	if (!num) retun 0;

	int res = 0;

	while(num)
	{
		res += (num & 1) ? 2 : 1;
		num >>= 1;
	}

	return res - 1;
}

/*
 For the binary representation from right to left(until we find the leftmost 1):
if we meet 0, result += 1 because we are doing divide;
if we meet 1, result += 2 because we first do "-1" then do a divide;
ony exception is the leftmost 1, we just do a "-1" and it becomse 0 already.
 */


// Time Complexitiy O(log n)
int numberOfSteps (int num){

    if (!num) return 0;

    int res = 0;

    while(num)
    {
        res += (num & 1) ? 2 : 1;
        num >>= 1;
    }

    return res - 1;
}
