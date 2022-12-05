#include <iostream>
using namespace std;



string helper (string s, int left, int right)
{
	while (left >= 0 && right < int(s.length()) && s[right] == s[left])
	{
		left--; right++;
	}
	
	return s.substr(left + 1, right - 1 - left);
}


string longestPalindrome(string s)
{
	if (s.length() == 0 || s.length() == 1) return s;

	string max("");
	
	for (int i = 0 ; i < int(s.length()) - 1; i++)
	{
		string first = helper(s, i, i);
		if (first.length() > max.length()) max = first;
		
		string second = helper(s, i, i+1);
		if (second.length() > max.length()) max = second;
	}
	return max;
}




int main()
{
	string input, output;

	cout << "Enter the string \n";
	cin >> input;

	output = longestPalindrome(input);

	cout << "The Longest palindrome string is " << output << endl;	
	
	return 0;
}


