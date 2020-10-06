#include <iostream>
#include <vector>
using namespace std;


void subset(vector<vector<int>>& res , int i, vector<int>& sub, vector<int>& nums)
  {
        // store the single array in 2D array
        res.push_back(sub);
        
        // Go through the loops 
        for (int j = i; j < nums.size(); j++)
        {
            // add the values in sub
            sub.push_back(nums[j]);
            
            // Call the subset again
            subset(res, j+1, sub, nums);
            
            // remove elements
            sub.pop_back();
        }
    }
    
vector<vector<int>>subsets(vector<int>& nums) 
{        
        // use to result 
        vector<vector<int> > result;
        
        //use to store temperory 
        vector<int> sub;
    
        // call the subsets func
        subset(result, 0, sub, nums);
        
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
