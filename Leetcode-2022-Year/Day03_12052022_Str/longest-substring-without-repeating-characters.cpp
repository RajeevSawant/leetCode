/*
* Given a string s, find the length of the longest 
substring
 without repeating characters.

 Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

*/


int lengthOfLongestSubstring(string s) {
    vector<int> dict(256, -1);

    int start = -1, maxLen = 0;

    for (int i = 0; i < s.length(); i++) {

        if (dict[s[i]] > start) {
            start = dict[s[i]];
        }

        dict[s[i]] = i;

        maxLen = max(maxLen, i - start);
    }

    return maxLen;
}