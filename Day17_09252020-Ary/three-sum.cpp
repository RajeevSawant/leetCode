#include <iostream>
#include <vector>
using namespace std;


vector<vector<int> > threeSum (vector<int>& nums)
{
	vector<vector<int> > res;
	int front, back , sum = 0, target;

	std::sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		target = -nums[i];
		front = i + 1;
		back = nums.size() - 1;


		while(front < back)
		{
			sum = nums[front] + nums[back];

			if (sum < target)
			{
				front++;
			}
			else if (sum > target)
			{
				back--;
			}
			else
			{
				vector<int> tar(3, 0);
				tar[0] = nums[i];
				tar[1] = nums[front];
				tar[2] = nums[back];

				res.push_back(tar);

				while(front < back && tar[1] == nums[front]) front++;
				while(front < back && tar[2] == nums[back]) back--;
			}
		}

		while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
	}

	return res;
}



int main()
{
	vector<vector<int> > result;

	vector<int> inp {-1, 0, 1, 2, -1, -4};


	result = threeSum(inp);
	
	cout << "[ " << endl;
	for (int i  = 0; i < result.size(); i++)
	{
		cout <<"[ ";
		for (int j = 0; j < 3; j++)
		{
			cout << result[i][j] << " ";	
		}
		cout << "]" << endl;
	}
	
	cout <<" ]" << endl;
	return 0;
}
