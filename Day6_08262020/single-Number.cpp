#include <iostream>
#include <vector>
using namespace std;


    int singleNumber(vector<int>& nums) {
        
        int result = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            // XOR of the 2 same number is always 0
            result ^= nums[i];
        }
        
        return result;
    }

int main()
{
	vector<int> inp;

	inp.push_back(2);
	inp.push_back(1);
	inp.push_back(4);
	inp.push_back(2);
	inp.push_back(1);

	cout << "The Single Number is " << SingleNumber(inp) << endl;
	return 0;
}
