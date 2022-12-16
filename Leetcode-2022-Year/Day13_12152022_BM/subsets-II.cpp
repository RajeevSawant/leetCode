/*
* 
* Given an integer array nums that may contain duplicates, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.


Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
*/

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<vector<int>> subs;
    vector<int> sub;

    subset(nums, 0, sub, subs);

    return subs;
}


void subset(vector<int> nums, int j, vector<int>& sub, vector<vector<int>>& subs) {

    subs.push_back(sub);

    for (int i = j; i != nums.size(); ++i) {
        if ((i == j) || (nums[i] != nums[i - 1])) {
            sub.push_back(nums[i]);
            subset(nums, i + 1, sub, subs);
            sub.pop_back();
        }
    }
}