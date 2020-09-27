#include <iostream>
#include <vector>
using namespace std;


int removeDuplicates(vector<int>& nums)
{
	if (!nums.size()) return 0;

	for (int i = 0; i < nums.size()- 1; i++)
	{	
		if (nums[i] == nums[i + 1])
		{
			nums.erase(nums.begin() + i);
			i--;
		}
	}

	return nums.size();
}


int main()
{
	vector<int> inp {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

	cout << "The size of the array is " << removeDuplicates(inp) << endl;	

	return 0;
}
