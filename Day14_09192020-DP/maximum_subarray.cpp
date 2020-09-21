#include <iostream>
#include <vector>
using namespace std;


int maxSubArray(vector<int>& nums)
{
	int sum = 0, maxValue = nums[0];
	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];
		
		maxValue = max(sum, maxValue);
		sum = max(sum , 0);
	}
	
	return maxValue;
}



int main()
{
	vector<int> inp {-2, 1, -3, 4, -1, 2, 1, -5, 4};

	int result = maxSubArray(inp);
	cout << "The result is " << result << endl;

	return 0;
}
