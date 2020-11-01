#include <iostream>
#include <vector>
using namespace std;




int maximumProduct(vector<int>& nums)
{
	std::sort(nums.begin(), nums.end());
	int n = nums.size() - 1, result1 = 0, result2 = 0;

	result1 = nums[n] * nums[n - 1] * nums[n - 2];
	result2 = nums[0] * nums[1] * nums[n];

	if (result1 > result2)
	{
		return result1;
	}
	else
	{
		return result2;
	}
}



int main()
{
	vector<int> nums {-1, -2, -3};
	
	cout << "The Maximum-Product is " << maximumProduct(nums) << endl;

	return 0;
}
