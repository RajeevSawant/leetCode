/*
* Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
*/


vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> sub;

    helper(result, nums, sub, 0);

    return result;
}

void helper(vector<vector<int>>& result, vector<int> nums, vector<int>& subs, int start) {
    result.push_back(subs);

    for (int i = start; i < nums.size(); i++) {
        subs.push_back(nums[i]);
        helper(result, nums, subs, i + 1);
        subs.pop_back();
    }
}