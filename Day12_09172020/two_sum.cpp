#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


vector<int> twoSums (vector<int>& nums , int target)
{
	vector<int> result;
	unordered_map<int , int> hash;	
	int numx = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		numx = target - nums[i];

		if (hash.find(numx) != hash.end())
		{
			result.push_back(hash[numx]);
			result.push_back(i);
		}

		hash[nums[i]] = i;
	}
	
	return result;
}



int main()
{
	int n = 0, temp = 0, target = 0;
	vector<int> sums, results;

	cout << "Enter the number of parameters\n";
	cin >> n;

	cout << "Enter the values\n";
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		sums.push_back(temp);
	}

	cout << "Enter the target\n";
	cin >> target;

	results = twoSums(sums, target);

	cout << "The positions are ";
	for (int j = 0; j < results.size(); j++)
	{
		cout << results[j] << " ";
	}
	cout << "\n";

	return 0;
}


