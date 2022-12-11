/*
* 
* Given an integer array arr, return the number of distinct bitwise ORs of all the non-empty subarrays of arr.

The bitwise OR of a subarray is the bitwise OR of each integer in the subarray. The bitwise OR of a subarray of one integer is that integer.

A subarray is a contiguous non-empty sequence of elements within an array.

Input: arr = [0]
Output: 1
Explanation: There is only one possible result: 0.
*/

int subarrayBitwiseORs(vector<int>& arr) {
    unordered_set<int> cur, cur2, res;

    for (int i : arr) {
        cur2 = { i };
        for (int j : cur) { cur2.insert(i | j); }
        cur = cur2;
        for (int j : cur) { res.insert(j); }
    }
    return res.size();
}