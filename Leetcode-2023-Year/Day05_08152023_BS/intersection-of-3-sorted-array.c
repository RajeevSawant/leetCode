/*
* 
* Given three integer arrays arr1, arr2 and arr3 sorted in strictly increasing order, 
return a sorted array of only the integers that appeared in all three arrays.


Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]
Output: [1,5]
Explanation: Only 1 and 5 appeared in the three arrays.
*/


// C++

vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
    vector<int> res = {};

    for (int i : arr1) {
        if (BinarySearch(arr2, i) && BinarySearch(arr3, i)) {
            res.push_back(i);
        }
    }

    return res;
}


bool BinarySearch(vector<int>& res, int target) {
    int n = res.size() - 1, m = 0;

    while (m <= n) {
        int mid = (m + n) / 2;

        if (res[mid] == target) {
            return true;
        }
        else if (res[mid] > target) {
            n = mid - 1;
        }
        else if (res[mid] < target) {
            m = mid + 1;
        }
    }
    return false;
}