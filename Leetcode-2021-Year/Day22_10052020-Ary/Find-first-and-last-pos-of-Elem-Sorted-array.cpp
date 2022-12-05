#include <iostream>
#include <vector>
using namespace std;



int lowerbound(vector<int>& nums, int target)
{
	int l = 0, r = nums.size() - 1;

	while(l <= r)
	{
		int mid = l + (r - l)/2;

		if(nums[mid] < target)
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}

	}

	return l;
}



vector<int> searchRange(vector<int>& nums, int target)
{
	int idx1 = lowerbound(nums, target);
	int idx2 = lowerbound(nums, target + 1) - 1;

	if (idx1 <= idx2)
	{
		return {idx1, idx2};
	}
	else
	{
		return {-1 , -1};
	}
}



int main()
{
	vector<int> nums {5, 7, 7, 8, 8, 10};
	int target = 8;

	vector<int> res;

	res = searchRange(nums, target);

	cout << "The first and the last position are ";
	for (int i = 0; i < res.size(); i++)
	{
		cout << " " << res[i];
	}
	cout << endl;

	return 0;
}


