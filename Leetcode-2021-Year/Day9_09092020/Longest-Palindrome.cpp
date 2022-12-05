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
        // if the length is already less than 1 meaning no element or equal to 1 meaning 1 element , return string itself.
        if (s.length() <= 1) return s;
        
        // initialize all the varaible , longestPalindromicLength is 1 , since we have skiped the 1st check so we know the 
        // minimum length of the string is more than 1.
        int len = s.length(), longestPalindromeStart = 0, longestPalindromeLength = 1;
        
        // create a state table 
        bool state[len][len];
        
        
        // mark all the values as true
        for (int i = 0; i < len; i++)
            state[i][i] = true;
        
        
        for(int i = len - 1; i >= 0; i--)
        {
            for(int dist = 1; dist < len - i; dist++)
            {
                // Imagine a 2D matrix , i being the row and j being the col
                int j = dist + i;
                
                // dist == 1 meaning the last param of the 2D matrix and we are comparing the value by itself
                // so if s = "aa" , then s[start] = s[end] and start + dist = end, in this case dist is 1.
                // if the dist is greater than 1 , then value of state[rowp][colp] would be true if s[rowp i.e start] == s[colp i.e                     end]
                // and the values bet them should all be palindromic or true i.e state[start + 1][end - 1]
                state[i][j] = (dist == 1) ? (s[i] == s[j]) : (s[i] == s[j]) && state[i + 1][j - 1];
                
                
                if (state[i][j] && j - i + 1 > longestPalindromeLength)
                {
                    longestPalindromeLength = j - i + 1;
                    longestPalindromeStart = i;
                }
                
            }
        }
        
        
        return s.substr(longestPalindromeStart, longestPalindromeLength); 

}



int main()
{
	string s = "cbbd";
	string res = longestPalindrome(s);

	cout << "Longest Palindrome is " << res << endl;

	return 0;
}
