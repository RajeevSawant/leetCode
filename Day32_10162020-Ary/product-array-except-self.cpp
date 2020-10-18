#include <iostream>
#include <vector>
using namespace std;


vector<int> productExceptSelf(vector<int>& nums)
{
	int n = nums.size();
	int fromBegin = 1;
	int fromLast = 1;

	vector<int> res(n , 1);

	for (int i = 0; i < n; i++)
	{
		res[i] *= fromBegin;
		fromBegin *= nums[i]; 
	}


	for (int i = n - 1; i >= 0; i--)
	{
		res[i] *= fromLast;
		fromLast *= nums[i];
	}

	return res;
}



int main()
{
	vector<int> nums {1, 2, 3, 4};
	vector<int> res;


	res = productExceptSelf(nums);

	for(int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";		
	}
	cout << endl;
	return 0;
}
