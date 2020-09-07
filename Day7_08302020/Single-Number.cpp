#include <iostream>
#include <vector>
using namespace std;


int SingleNumber(vector<int>& nums)
{
	int result = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		result = result ^ nums[i];
	}

	return result;
}


int main()
{
	vector<int> inp;

	inp.push_back(4);
	inp.push_back(1);
	inp.push_back(2);
	inp.push_back(1);
	inp.push_back(2);

	
	cout << "Single Number is " << SingleNumber(inp) << endl;

	return 0;
}
