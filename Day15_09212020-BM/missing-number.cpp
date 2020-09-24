#include <iostream>
#include <vector>
using namespace std;


int missingNumber(vector<int>& nums)
{
	int result = nums.size();

	for (int i = 0; i < nums.size(); i++)
	{
		result ^= i ^ nums[i];
	}
	
	return result;
}


int main()
{
	int n = 0, temp = 0;
	vector<int> res;

	cout << "Enter the number of paramaters \n";
	cin >> n;

	cout << "Enter the numbers\n";
	for (int i = 0; i < n - 1; i++)
	{
		cin >> temp;
		res.push_back(temp);
	}

	cout << "The Missing number is " << missingNumber(res) << endl;
	return 0;
}
