#include <iostream>
#include <vector>
using namespace std;


bool isMajorityElement(vector<int>& nums, int target)
{
	int major = 0, count = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		if (!count)
		{
			major = nums[i];
			count = 1;
		}else{
			count += (nums[i] == major) ? 1 : -1;
		}
	}

	count = 0;
	for (int j = 0; j < nums.size(); j++)
	{
		if (major == nums[j]) count++;
	}

	return ((major == target) && (count > nums.size()/2));
}
