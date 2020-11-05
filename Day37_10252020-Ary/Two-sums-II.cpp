#include <iostream>
#include <vector>
using namespace std;


    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int l = 0;
        int r = numbers.size() - 1;
        
        vector<int> result;
        
        while (l < r)
        {
            // since vector is already sorted 
            if (numbers[l] + numbers[r] == target)
            {
                result.push_back(l + 1);
                result.push_back(r + 1);
                return result;
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
        
        return result;
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
