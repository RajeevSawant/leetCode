#include <iostream>
#include <string>
using namespace std;

/*
 
Intuitively, we list all the substrings, pick those palindromic, and get the longest one. However, that causes TLE for we reach the same situations (input substrings) many times.

To optimize, we decompose the problem as follows

state variable:
start index and end index of a substring can identify a state, which influences our decision
so state variable is state(s, e) indicates whether str[s, e] is palindromic
goal state:
max(e - s + 1) that makes state(s, e) = true
state transition:
Let's observe example base cases

for s = e, "a" is palindromic,
for s + 1 = e, "aa" is palindromic (if str[s] = str[e])
for s + 2 = e, "aba" is palindromic (if str[s] = str[e] and "b" is palindromic)
for s + 3 = e, "abba" is palindromic (if str[s] = str[e] and "bb" is palindromic)
we realize that

for s + dist = e, str[s, e] will be palindromic (if str[s] == str[e] and str[s + 1, e - 1] is palindromic)
state transition equation:

state(s, e) is true:
for s = e, 
for s + 1 = e,  if str[s] == str[e]
for s + 2 <= e, if str[s] == str[e] && state(s + 1, e - 1) is true
note:
state(s + 1, e - 1) should be calculated before state(s, e). That is, s is decreasing during the bottop-up dp implementation, while the dist between s and e is increasing, that's why
 
 for (int s = len - 1; s >= 0; s--) {
            for (int dist = 1; dist < len - i; dist++) {
We keep track of longestPalindromeStart, longestPalindromeLength for the final output.

 */

string longestPalindrome(string s)
{
	//Corner cases
	if (s.length() <= 1) return s;


	int len = s.length(), longestPalindromeStart = 0, longestPalindromeLength = 1;

	bool state[len][len];

	for (int i = 0; i < len; i++)
		state[i][i] = true;

	
	 for (int i = len - 1; i >= 0; i--) 
	 {
            for (int dist = 1; dist < len - i; dist++) 
	    {
		    int j = dist + i;
		    state[i][j] = (dist == 1) ? (s[i] == s[j]) : (s[i] == s[j]) && state[i + 1][j - 1];

		    if (state[i][j] && j - i + 1 > longestPalindromeLength)
		    {
			longestPalindromeLength = j - i + 1;
			longestPalindromeStart = i;
		    }
	     }
          }

		return s.substr(longestPalindromeStart, longestPalindromeStart + longestPalindromeLength - 1);	 

}



int main()
{
	string s = "cbbd";
	string res = longestPalindrome(s);

	cout << "Longest Palindrome is " << res << endl;

	return 0;
}
