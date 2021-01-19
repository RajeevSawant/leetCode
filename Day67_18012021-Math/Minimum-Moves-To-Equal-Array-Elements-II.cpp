#include <iostream>
using namespace std;


int minMoves2(vector<int>& nums)
{
	int moves = 0, mean = getMedian(nums);
	
	for (int i : nums)
	{
		moves += abs(i - mean);
	}

	return moves;
}


int getMedian(vector<int>& nums)
{
	sort(nums.begin(), nums.end());

	return nums[nums.size()/2];
}
