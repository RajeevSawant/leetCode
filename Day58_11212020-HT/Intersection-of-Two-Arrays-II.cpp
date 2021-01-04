#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
{
	unordered_map<int, int> m;

	vector<int> out;

	for (int i: nums1)
	{
		m[i]++;
	}


	for (int i: nums2)
	{
		if (m[i]-- > 0)
		{
			out.push_back(i);
		}
	}

	return out;
}



/*
 
  C program:

 #define Hashlength  1000


int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){

    int* ret;
    int hash[Hashlength] = {0};


    for (int i = 0; i < nums1Size; i++)
    {
        hash[nums1[i]]++;
    }

    ret = calloc(fmax(nums1Size, nums2Size), sizeof(int));
    *returnSize = 0;


    for (int j = 0; j < nums2Size; j++)
    {
        if (hash[nums2[j]] > 0)
        {
            ret[(*returnSize)++] = nums2[j];
            hash[nums2[j]]--;
        }
    }


    return ret;


 */
