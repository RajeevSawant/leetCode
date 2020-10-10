#include <iostream>
#include <vector>
using namespace std;


int trap(vector<int>& height)
{
	int l = 0, r = height.size() - 1, level = 0, water = 0, lower = 0;

	while (l < r)
	{
		lower = height[height[l] < height[r] ? l++ : r--];
		level = max(lower, level);

		water += level - lower;
	}
	
	return water;
}



int main()
{
	vector<int> inp {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int res;

	res = trap(inp);

	cout << "The Result is " << res << endl;

	return 0;
}
