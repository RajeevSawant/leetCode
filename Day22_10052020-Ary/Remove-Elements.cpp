#include <iostream>
#include <vector>
using namespace std;


int removeElements(vector<int>& nums, int val)
{
	int len = 0;
	
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != val)
		{
			nums[len++] = nums[i];
		}
	}

	return len;

}



int main()
{
	vector<int> nums {0, 1, 2, 2, 3, 0, 4, 2};
	int val = 2;

	cout << "The Length is " << removeElements(nums, val) << endl;
	return 0;
}

