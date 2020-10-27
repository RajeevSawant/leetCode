#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;



int subarraySum(vector<int>& nums, int k)
{
	unordered_map<int , int> hash;

	int ret = 0, sum = 0;

	hash[0] = 1;

	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];

		if (hash[sum - k])
		{
			ret += hash[sum - k];
		}
		
		hash[sum]++;
	}

	return ret;
}



int main()
{
	vector<int> nums {1, 1, 1};

	int res = subarraySum(nums, 2);

	cout << "The result is " << res << endl;
	return 0;
}

