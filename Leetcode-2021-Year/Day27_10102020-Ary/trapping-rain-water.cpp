#include <iostream>
#include <vector>
using namespace std;


int trap(vector<int>& height) {
        
        int l = 0, r = height.size() - 1, level = 0, water = 0, lower = 0;
        
        while (l < r)
        {
            // get the lower value , by comparing either the left or the right
            lower = height[height[l] < height[r] ? l++ : r--];
            
            // compare with the level , which is max till now 
            level = max(lower , level);
            
            // get the water 
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
