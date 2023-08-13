/*
* Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.

Return the array ans.

Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
*/
// C
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize * 2;
    int* rnums = (int*)malloc(sizeof(int) * (2 * numsSize));

    for (int start = 0; start < (numsSize); start++) {
        rnums[start] = nums[start];
        rnums[numsSize + start] = nums[start];
    }

    return rnums;
}


// C++
vector<int> getConcatenation(vector<int>& nums) {

    int lnums = nums.size(), cur = 0;

    while (cur < lnums) {
        nums.push_back(nums[cur++]);
    }

    return nums;
}
