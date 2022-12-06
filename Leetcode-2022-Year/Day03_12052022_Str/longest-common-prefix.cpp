/*
* Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".


Input: strs = ["flower","flow","flight"]
Output: "fl"
*/

string longestCommonPrefix(vector<string>& strs) {

    if (!strs.size()) {
        return "";
    }

    string res = strs[0];

    for (int i = 0; i < strs.size(); i++) {
        for (int j = 0; j < res.size(); j++) {
            if (strs[i][j] != res[j]) {
                res.resize(j);
            }
        }
    }

    return res;
}