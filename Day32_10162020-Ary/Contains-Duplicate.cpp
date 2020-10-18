#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


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


int values[] = {88, 56, 2, 2, 25};

int main()
{
	cout << "Does the result contains Duplicate ?  " << boolalpha << containsDuplicate(values, 5) << endl;

	return 0;
}
