#include <iostream>
#include <vector>
using namespace std;



int majorityElements(vector<int>& nums)
{
	int count = 0, major = 0;
	
	// travel from 1 to last position of the arr
	for(int i = 0; i < nums.size(); i++)
	{
		
		if (!count)
		{	
			// Make the count value 1
			count = 1;

			// Save the major Value
			major = nums[i];
		}
		else
		{
			// Increase the count value if the major is same as current value in arr
			// if the value is not same then decrease the count.
			count += (major == nums[i]) ? 1: -1;
		}
		
	}
	
	// Return the element which is major
	return major;
}



int main()
{
	
	vector<int> inp {2, 2, 1, 1, 1, 2, 2};
	int result = 0;

	result = majorityElements(inp);


	cout << "The Majority Elements is  " << result << endl;

	return 0;
}

