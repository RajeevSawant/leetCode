#include <iostream>
#include <vector>
using namespace std;


    void subset(vector<vector<int>>& result, vector<int>& sub, int i, vector<int>& nums)
    {
        // store the result
        result.push_back(sub);
        
        // go through the loop
        for (int j = i; j < nums.size(); j++)
        {
            // push every element
            sub.push_back(nums[j]);
            
            // call subset again to move to next element
            subset(result, sub, j + 1, nums);
            
            //remove elements 
            sub.pop_back();
        }
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result;
        vector<int> sub;
        
        subset(result, sub, 0, nums);
        
        return result;
    }


int main()
{
	vector<int> inp;
	inp.push_back(1);
	inp.push_back(2);
	inp.push_back(3);


	vector<vector<int> > res;

	res = subsets(inp);

	for (int j = 0; j < res.size(); j++)
	{
		cout << "[";
		for (int k = 0; k < res[j].size(); k++)
		{
		   cout << " " <<res[j][k];	
		}
		cout << "]\n"; 
	}

	
	return 0;
}
