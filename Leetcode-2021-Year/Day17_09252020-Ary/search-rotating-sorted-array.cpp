#include <iostream>
#include <vector>

using namespace std;


int search(vector<int>& nums, int target) {
        
        int lo = 0, hi = int(nums.size()) - 1;   // get the low and high positions/indexes
        
        while (lo < hi)
        {
            int mid = (lo + hi)/2;         // get the mid position
            
            /* 
            1.  if target is greater than nums[mid], if this is false then target would be in upper side (after rotating) or lower side if not rotating array.
                if this is true then target would be on upper side 
                
            2. the array is rotated and the values from nums[mid] are lower(starting point of array is after nums[mid])
            
            3. if nums[0] is greater than target meaning target is at higher end . 
            
            */
            
            if ((nums[0] > target) ^ (nums[0] > nums[mid]) ^ (target > nums[mid]))   
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid;
            }
        }
        
        return (lo == hi && nums[lo] == target ? lo : -1);
}


int main()
{
	vector<int> inp {4, 5, 6, 7, 0, 1, 2, 3};

	int result = 0;

	result = search(inp, 0);

	cout << "The position is " << result << endl;

	return 0;
}
