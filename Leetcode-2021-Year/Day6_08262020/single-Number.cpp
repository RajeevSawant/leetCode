#include <iostream>
#include <vector>
using namespace std;


int SingleNumber (vector<int>& nums)
{
        int single = 0;
        
        // Traverse throughout the list
        for (int i = 0; i < nums.size(); i++)
        {
            // XOR follows the principle of commutative and associative 
            // XOR of 2 same numbers is always zero
            // XOR of any number with 0 is the same number
            // since the res would be the only single number, we get the output as the result.
            single ^= nums[i];
        }
        
        return single;

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
