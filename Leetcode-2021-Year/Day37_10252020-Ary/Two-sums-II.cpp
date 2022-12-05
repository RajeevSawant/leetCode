#include <iostream>
#include <vector>
using namespace std;


vector<int> twoSum(vector<int>& numbers, int target)
{
	int l = 0;
	int r = numbers.size() - 1;


	while (l < r)
	{
		if (numbers[l] + numbers[r] == target)
		{
			vector<int> res{l + 1, r + 1};
			return res;
		}
		else if (numbers[l] + numbers[r] > target)
		{
			r--;
		}
		else
		{
			l++;
		}
	}

}



int main()
{
	vector<int> numbers {2, 7, 11, 15};

	vector<int> res = twoSum(numbers, 9);

	cout << "[ ";
	for(int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << "] \n";

	return 0;
}
