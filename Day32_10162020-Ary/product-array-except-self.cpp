#include <iostream>
#include <vector>
using namespace std;


/*
    
    Given numbers [2, 3, 4, 5], regarding the third number 4, the product of array except 4 is 235 which consists of two parts: left 23 and right 5. The product is leftright. We can get lefts and rights:

Numbers:     2    3    4     5
Lefts:            2  2*3 2*3*4
Rights:  3*4*5  4*5    5      
Let’s fill the empty with 1:

Numbers:     2    3    4     5
Lefts:       1    2  2*3 2*3*4
Rights:  3*4*5  4*5    5     1
We can calculate lefts and rights in 2 loops. The time complexity is O(n).

Copy from Someone explanation
    
    
*/
    
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // get the max values
        int n = nums.size();
        
        // to muliply the value from begining
        int fromBegin = 1;
        
        // to multiply the value from last
        int fromLast = 1;
        
        // store the result , size should be same as input array size , initiliaze all the values to 1
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
