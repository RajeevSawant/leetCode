#include <iostream>
using namespace std;


/*

Based on this solution: https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/discuss/91049/Java-O(n)-solution-using-bit-manipulation-and-HashMap

I think this question looks like the most difficult question until you get to the right track. The idea is you try to find an answer based on possible candidates. I will try to briefly explain it using 8 bits instead of 32 bits.

Assume that we have 8 bit ints. Our max result could be 11111111. To achieve this there must be two numbers when XORed their MSB should give 1.

So our first mask is 1000000. (1 shifted all the way to the left). Since we are only checking the first digit we AND the nums with this mask and add to a hash table. Then for each number in our input we test if there's a corresponding number that would give this. If there's then our next candidate is 11000000, if not then our next candidate is 0100000.

The trick is that while we are using the hash table we search for " candidate ^ *it " if this exists then it means there is a " nums[x] ^ *it " that gives the candidate based on the XOR property A = B ^ C => A ^ C = B

So we iterate through all the possible candidates. The outer loop can start from 30 or 31.

*/


int findMaximumXOR(vector<int>& nums) {

        int mask = 0;
        int result = 0;
        for (int i=30; i>=0; i--)
        {
            mask =  mask | (1 << i);
            unordered_set<int> myset;
            for (int i=0; i<nums.size(); i++)
            {
                myset.insert(nums[i] & mask);
            }

            int candidate = result | (1<<i);
            for (auto it=myset.begin(); it!=myset.end(); it++)
            {
                if (myset.count(candidate ^ *it))
                {
                    result = candidate;
                    break;
                }
            }
        }

        return result;

}





/*
class TrieNode
{
	int val;
	TrieNode* binary[2];

	public:

	TrieNode()
	{
		binary[0] = binary[1] = NULL;
	}

	~TrieNode()
	{
		if (binary[0])
			delete(binary[0]);

		if (binary[1])
			delete(binary[1]);
	}

	void insert(int n)
	{
		TrieNode* curr = this;

		for (int i = 30; i >= 0; i--)
		{
			bool bit = n & (1 << i);

			if (!(curr -> binary[bit]))
				curr -> binary[bit] = new TrieNode();

			curr = curr -> binary[bit];
		}

		curr -> val = n;
	}

	int getOpposite(int n)
	{
		TrieNode* curr = this;
		for (int i = 30; i >= 0; i--)
		{
			bool bit = n & (l << i);

			if (curr -> binary[!bit])
				curr = curr -> binary[!bit];
			else
				curr = curr -> binary[bit];
		}
		
		return curr -> val;
	}
};


int findMaximumXOR(vector<int>& nums)
{
	TrieNode* root = new TrieNode();

	for (int n: nums)
		root -> insert(n);

	int res = 0;

	for (int n: nums)
		res = max(res, n ^ root -> getOpposite(n));
	
	return res;
}

*/

