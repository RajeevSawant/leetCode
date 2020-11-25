#include <iostream>
using namespace std;


int subarrayBitwiseORs(vector<int>& A)
{
	unordered_set<int> s;
	set<int> t;

	for (int i : A)
	{
		set<int> r;
		r.insert(i);
		for (int j : t) r.insert(i | j);

		t = r;
		for (int j : t) s.insert(j);

	}

	return s.size();
}



/*
 For example, an array is [001, 011, 100, 110, 101] (in binary).

All the subarrays are:

[001]
[001 011] [011]
[001 011 100] [011 100] [100]
[001 011 100 110] [011 100 110] [100 110] [110]
[001 011 100 110 101] [011 100 110 101] [100 110 101] [110 101] [101]
In each line, we add a new number to each array of the previous line.

Calculate the OR operations for each subarray:

001
011 011
111 111 100
111 111 110 110
111 111 111 111 101
There are O(N^2) numbers in total, which is not acceptable.

After removing duplicate numbers in each line, it becomes:

001
011
111 100
111 110
111 101
In each line t, for any two numbers t[i] and t[j] (i < j), t[i] must have more 1s than t[j]. So the length of each line will not exceed 32. So if we remove duplicate numbers, the complexity would not be very large.

The complexity is O(kN), where k is a constant depends on the bitwise length of input numbers. (32 in this problem)

 */
