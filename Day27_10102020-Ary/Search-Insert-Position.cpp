#include <iostream>
#include <vector>
using namespace std;


int searchInsert(vector<int>& nums, int target)
{
	int start = 0, end = nums.size() - 1, mid = 0;

	while (start < end)
	{
		mid = (start + end) / 2;

		if (nums[mid] >= target)
		{
			end = mid;
		}
		else
		{
			start = mid + 1;
		}

	}

	return start;
}


int main()
{
	vector<int> inp {1, 3, 5, 6};
	int res;

	res = searchInsert(inp, 2);

	cout << "The result is " << res << endl;

	return 0;
}
