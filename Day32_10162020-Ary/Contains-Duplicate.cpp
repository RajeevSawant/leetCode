#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/*
int comp(const void* a, const void* b)
{
	return(*(int*)a - *(int*)b);
}


bool containsDuplicate(int* nums, int numsSize)
{
	// Sort
	qsort(nums, numsSize, sizeof(int), comp);


	//Loop
	for (int i = 0; i < numsSize - 1; i++)
	{
		if (nums[i] == nums[i + 1]) return true;
	}

	return false;
}
*/

bool containsDuplicate(vector<int>& nums) {

        // if Empty then return false;
        if (nums.empty()) return false;

        // Sort the numbers to compare with the neighbors
        sort(nums.begin(), nums.end());

        // Go through the loop , compare the current and the next number
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                return true;
        }

        // if no 2 same elements are found then return false;
        return false;
}


int values[] = {88, 56, 2, 2, 25};

int main()
{
	vector<int> res {88, 56, 2, 2, 25};
	cout << "Does the result contains Duplicate ?  " << boolalpha << containsDuplicate(res) << endl;

	return 0;
}
