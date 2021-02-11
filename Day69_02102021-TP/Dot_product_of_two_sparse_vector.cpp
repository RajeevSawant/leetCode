#include <iostream>
#include <unordered_map>


unordered_map<int , int> m;


SparseVector(vector<int>& nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i])
		{
		   m[i] = nums[i];	
		}
	}
}


int dotProduct(SparseVector& vec)
{
	int total = 0;
	int size1 = this -> m.size();
	int size2 = vec.m.size();

	if (size1 < size2)
	{
		for (auto& i: this -> m)
		{
			total += i.second * vec.m[i.first];
		}
	}
	else
	{
		for (auto& i: vec.m)
		{
			total += i.second * this -> m[i.first];	
		}
	}

	return total;	
}




/*
 * Time complexitiy would be O(N) and space complexitiy would be O(N) 
 * Youtube: https://www.youtube.com/watch?v=VZ_aDbtO8oI
 */
