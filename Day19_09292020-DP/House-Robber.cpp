#include <iostream>
#include <vector>
using namespace std;


int rob(vector<int>& nums)
{
	// get the no.of elements in the vector
	int n = nums.size();

	// if no elements present
	if (n == 0) return 0;

	// if 1 element present
	if (n == 1) return nums[0];


	// if 2 element present
	if (n == 2) return max(nums[0], nums[1]);

	vector<int> f(n , 0);

	f[0] = nums[0];
	f[1] = max(nums[0], nums[1]);

	for (int i = 2; i < n; i++)
	{
		// The first condition would be to add the elements at positions 0, 2, 4, .... etc
		// The second condition would be to add elements at positions 1, 3, 5 ... etc.
		f[i] = max(f[i - 2] + nums[i], f[i - 1]);
	}
	

	// the last element would return max money
	return f[n - 1];
}




int main()
{
	vector<int> res {1, 2, 3, 1};
	int money = 0;
	
	
	money = rob(res);

	cout << "The total money that could be robbed is " << money << endl;
	return 0;
}
