#include <iostream>
#include <vector>
using namespace std;


vector<int> majorityElements (vector<int>& nums)
{
	int y = 0, z = 0, cy = 0, cz = 0;


	for (auto x: nums)
	{
		if (x == y) cy++;
		else if (x == z) cz++;
		else if (!cy) {y = x; cy = 1;}
		else if (!cz) {z = x; cz = 1;}
		else {cy--; cz--;}
	}

	
	cy = 0; cz = 0;

	for(auto x: nums)
	{
		if (x == y) cy++;
		else if (x == z) cz++;
	}


	vector<int> res;

	if (cy > nums.size()/3) res.push_back(y);
	if (cz > nums.size()/3) res.push_back(z);

	return res;
}




int main()
{
	vector<int> lst {3, 2, 3};

	vector<int> res = majorityElements(lst);

	cout << "[ ";
	for(auto x: res)
	{
		cout << x << " ";	
	}
	cout << "]\n";
	return 0;
}
