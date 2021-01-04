#include <iostream>
#include <vector>
#include <set>
using namespace std;


vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
	
	unordered_set<int> m(nums1.begin(), nums1.end());

	vector<int> res;

	for (auto a: nums2)
	{
		if (m.count(a))
		{
			res.push_back(a);
			m.erase(a);
		}
	}

	return res;
}


/*

C program:

#define Hashlength 1000

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){

    int* ret;
    int hash[Hashlength] = {0};
    
    for (int i = 0; i < nums1Size; i++)
    {
        hash[nums1[i]] = 1;
    }
    
    ret = calloc(fmax(nums1Size, nums2Size),  sizeof(int));
    *returnSize = 0;
    
    for (int j = 0; j < nums2Size; j++)
    {
        if (hash[nums2[j]] == 1)
        {
            ret[(*returnSize)++] = nums2[j];
            hash[nums2[j]] = 0;
        }
    }
    
    return ret;
}
 
 
 */
