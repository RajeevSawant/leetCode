#include <iostream>
using namespace std;


int minMoves(vector<int>& nums)
{
	int min = nums[0], moves = 0;

	for(int i: nums)
	{
		if (i < min)
		{
			min = i;
		}
	}
	

	for (int i: nums)
	{
		moves += i - min;
	}

	return moves;
}
