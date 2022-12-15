/*
* Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.


Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]


*/

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> res;

    unordered_map<string, vector<string>> mp;

    for (string st : strs) {
        string sorted = st;
        sort(sorted.begin(), sorted.end());
        mp[sorted].push_back(st);
    }

    unordered_map<string, vector<string>> ::iterator o = mp.begin();

    while (o != mp.end()) {
        res.push_back(o->second);
        o++;
    }

    return res;
}