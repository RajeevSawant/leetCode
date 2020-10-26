#include <vector>
#include <iostream>
#include <map>
using namespace std;


vector<int> findDisappearedNumbers(vector<int>& nums)
{
	int nums_size = nums.size();
	map <int , int> hash;
	vector<int> result;


	for (int i = 0; i < nums_size; i++)
	{
		hash[nums[i]] = nums[i];
	}

	for (int j = 0; j < nums.size(); j++)
	{
		
		if (hash.find(j + 1) != hash.end())
		{
			continue;
		}
		else
		{
			result.push_back(j + 1);
		}
	}

	return result;
}

int main()
{
	vector<int> nums {4, 3, 2, 7, 8, 2, 3, 1};

	vector<int> res = findDisappearedNumbers(nums);

	cout << "[ ";
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << "] \n";

	return 0;
}
