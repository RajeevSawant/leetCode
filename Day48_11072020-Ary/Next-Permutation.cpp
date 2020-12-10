#include <iostream>
#include <vector>
using namespace std;

/*
 *
 *
According to Wikipedia, a man named Narayana Pandita presented the following simple algorithm to solve this problem in the 14th century.
Find the largest index k such that nums[k] < nums[k + 1]. If no such index exists, just reverse nums and done.
Find the largest index l > k such that nums[k] < nums[l].
Swap nums[k] and nums[l].
Reverse the sub-array nums[k + 1:].
 *
 *
 *



void nextPermutation(vector<int>& nums)
{
	int n = nums.size(), k , l;
	
	for (k = n - 2; k >= 0; k--)
	{
		if (nums[k] < nums[k + 1])
			break;
	}


	if (k < 0)
	{
		reverse(nums.begin(), nums.end());
	}
	else
	{
		for (l = n - 1; l > k; l--)
		{
			if (nums[l] > nums[k])
				break;
		}

		swap(nums[k], nums[l]);
		reverse(nums.begin() + k + 1, nums.end())

	}
}



*/




/*
I don't think any one can understand this solution without seeing an example, here is an example:
2,3,6,5,4,1

Solution:
Step1, from right to left, find the first number which not increase in a ascending order. In this case which is 3.
Step2, here we can have two situations:

We cannot find the number, all the numbers increasing in a ascending order. 
This means this permutation is the last permutation, we need to rotate back to the first permutation. 
So we reverse the whole array, for example, 6,5,4,3,2,1 we turn it to 1,2,3,4,5,6.

We can find the number, then the next step, we will start from right most to leftward, try to find the first number which is larger than 3, 
in this case it is 4.
Then we swap 3 and 4, the list turn to 2,4,6,5,3,1.
Last, we reverse numbers on the right of 4, we finally get 2,4,1,3,5,6.

Time complexity is: O(3*n)=O(n).

At the end, I don't know how to come up this solution. Here is just to understand the solution with example. Hope this helps.

 
 *
 *
 */






 void nextPermutation(int[] nums) {
      int n = nums.length - 1, p = -1, pv = 0;

      for(int i = n - 1; i >= 0; i--){
        if(nums[i] < nums[i + 1]) {
            p = i;
            pv = nums[i];
            break;
        }
      }

      if(p == -1) {
        reverse(nums, 0, n);
        return;
      }

      for(int i = n; i >= 0; i--){
        if(nums[i] > pv){
          swap(nums, p, i);
          break;
        }
      }

      reverse(nums, p + 1, n);
 }

    void reverse(int[] nums, int s, int e){
      while(s < e){
        swap(nums, s, e);
        s++;
        e--;
      }
    }

    void swap(int[] nums, int s, int e){
        int t = nums[s];
        nums[s] = nums[e];
        nums[e] = t;
    }
