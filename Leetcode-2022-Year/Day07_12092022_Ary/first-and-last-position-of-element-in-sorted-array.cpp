/*
* 
* Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.


Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]


*/


int searchPos(vector<int>& nums, int target) {
    int lo = 0, hi = nums.size() - 1, mid = 0;

    while (lo <= hi) {
        mid = (lo + (hi - lo) / 2);

        if (nums[mid] < target) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

    return lo;
}

vector<int> searchRange(vector<int>& nums, int target) {

    int first = searchPos(nums, target);
    int second = searchPos(nums, target + 1) - 1;

    if (first <= second) {
        return { first, second };
    }
    else {
        return { -1, -1 };
    }

}