#include <iostream>
#include <vector>
using namespace std;


void subset(vector<vector<int> >& result, int i, vector<int>& sub, vector<int>& nums)
{
	result.push_back(sub);

	for (int j = i; j < nums.size(); j++)
	{
		sub.push_back(nums[j]);
		subset(result, j+1, sub, nums);
		sub.pop_back();
	}
}


vector<vector<int> > subsets(vector<int>& nums)
{
        vector<vector<int> > result;
        vector<int> sub;

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
