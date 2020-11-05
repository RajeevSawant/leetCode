#include <vector>
#include <iostream>
#include <map>
using namespace std;


    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        // get the size of the inp vector
        int num_size = nums.size();
        
        // initialize the result
        vector<int> result;
        
        // use hash-table
        map<int , int> hash;
        
        
        for (int a : nums)
        {
            hash[a] = a;
        }
        
        
        for (int i = 0; i < num_size; i++)
        {
            // if found then skip the loop
            if (hash.find(i + 1) != hash.end())
            {
                continue;
            }
            else
            {
                // if not found means missing 
                result.push_back(i + 1);
            }
        }
        
        return result;
    }

int main()
{
	vector<int> nums {4, 3, 2, 7, 8, 2, 3, 1};

	vector<int> res = findDisappearedNumbers(nums);

	cout << "[ ";
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << "] \n";

	return 0;
}
