
#include <iostream>
#include <vector>
using namespace std;




void subset(vector<vector<int> >& res, vector<int>& nums, int i, vector<int>& sub)
{
	res.push_back(sub);

	for (int j = i; j < nums.size(); j++)
	{
		sub.push_back(nums[j]);
		subset(res, nums,  j + 1, sub);
		sub.pop_back();
	}

}


vector<vector<int> > subset(vector<int>& nums)
{
	vector<vector<int> > result;
	vector<int> sub;

	subset(result, nums, 0 , sub);
	
	return result;
}



int main()
{
	vector<int> inp;
	vector<vector <int> > result;
	int n_size, temp;

	cout << "Enter the number of elements in array \n";
	cin >> n_size;


	cout << "Enter the numbers\n";

	while(n_size--)
	{
		cin >> temp;
		inp.push_back(temp);
	}


	result = subset(inp);

	cout << "\nThe Subsets are \n";

	for (int i = 0; i < result.size(); i++)
	{
		cout << "[ ";
		for (int j = 0; j < result[i].size(); j++)
		{
		   cout << result[i][j] << " ";	
		}
		cout <<"]\n";
	}

	return 0;

}
