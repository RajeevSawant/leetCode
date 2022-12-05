#include <iostream>
#include <vector>
using namespace std;


int searchInsert(vector<int>& nums, int target) {
        
        // get the low and high indexes of the vector 
        // Fails if the hi is nums.size() - 1, and the target is larger than largest number in vector
        int lo = 0, hi = nums.size(), mid = 0;
        
        // lo is less than hi
        while(lo < hi)
        {
            // get the mid index of the vector
             mid = (lo + hi)/2;
            
            // meaning target is in lower range 
            if (nums[mid] >= target)
            {
                hi = mid;
            }
            else if (nums[mid] < target)   // meaning target is in higher range 
            {
                lo = mid + 1;
            }
        }
        
        return lo;
}

int main()
{
	vector<int> inp {1, 3, 5, 6};
	int res;

	res = searchInsert(inp, 2);

	cout << "The result is " << res << endl;

	return 0;
}
