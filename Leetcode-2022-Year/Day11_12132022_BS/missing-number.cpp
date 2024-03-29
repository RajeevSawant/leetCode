/*
* Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
* 
* 
* 
Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
*/

int missingNumber(vector<int>& nums) {

    int nums_size = nums.size(), res = nums.size();

    for (int i = 0; i < nums_size; i++) {
        res ^= i ^ nums[i];
    }

    return res;
}