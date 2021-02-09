#include <iostream>
#include <vector>
using namespace std;


vector<string> arr;
int result;


bool isUnique(string s)
{
	vector<int> counts(26, 0);

	for(char c: s)
	{
		counts[c - 'a']++;
		if (counts[c - 'a'] > 1)
		{
			return false;
		}
		
	}
	return true;	
}


void maxUnique(int index, string current)
{
	if (index >= arr.size())
	{
		return;
	}
	
	for (int i = index; i < arr.size(); i++)
	{
		string curr = current + arr[i];

		if (isUnique(cur))
		{
			result = max(result ,(int)curr.size());
			maxUnique(i + 1, curr);
		}
	}

}

int maxLength(vector<string>& arr)
{
	this -> arr = arr;
	maxUnique(0, "");
	
	return result;
}


