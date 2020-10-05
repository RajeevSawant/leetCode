#include <iostream>
#include <vector>
using namespace std;


int threeSumClosest(vector<int>& nums, int target)
{
	if (nums.size() < 3) return 0;

	int closest = nums[0] + nums[1] + nums[2];

	sort(nums.begin(), nums.end());


	for (int first = 0; first < nums.size() - 2; ++first)
	{
		if (first > 0 && nums[first] == nums[first - 1]) continue;

		int second = first + 1;
		int third = nums.size() - 1;


		while (second < third)
		{
			int cur = nums[first] + nums[second] + nums[third];

			if (abs(target - closest) > abs(target - cur))
				closest = cur;

			if (cur > target)
			{
				third--;
			}
			else
			{
				second++;
			}
		}

	}

	return closest;
}



int main()
{
	
	vector<int> nums{-1, 2, 1, 4};
	int target = 1;

	int res = threeSumClosest(nums, target);


	cout << "The Closest value is " << res << endl;

	return 0;
}
