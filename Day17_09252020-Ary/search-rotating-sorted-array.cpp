#include <iostream>
#include <vector>

using namespace std;


int search(vector<int>& nums, int target)
{
	int lo = 0, hi = int(nums.size()) - 1;

	while(lo < hi)
	{
		int mid = (lo + hi)/ 2;

		if ((nums[0] > target) ^ (nums[0] > nums[mid]) ^ (target > nums[mid]))
			lo = mid + 1;
		else
			hi = mid;
	}
	return (lo == hi && nums[lo] == target ? lo : -1);
}



int main()
{
	vector<int> inp {4, 5, 6, 7, 0, 1, 2, 3};

	int result = 0;

	result = search(inp, 0);

	cout << "The position is " << result << endl;

	return 0;
}
