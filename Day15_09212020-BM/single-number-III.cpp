#include <iostream>
#include <vector>
using namespace std;


vector<int> singleNumber(vector<int>& nums)
{
	vector<int> result;
	int xorVal = nums.front();


	for (int i = 1; i < nums.size(); i++)
		xorVal ^= nums[i];


	cout << "\nXorVal is " << xorVal << endl;

	int bit = xorVal & ~(xorVal - 1);
	cout << "\nbit is " << bit << endl;
	
	int num1 = 0, num2 = 0;

	for (int num: nums)
	{
		if ((num & bit) > 0)
		{
			num1 ^= num;
		}
		else
		{
			num2 ^= num;
		}
	}

	result.push_back(num1);
	result.push_back(num2);

	return result;
}



int main()
{
	vector<int> result, input;
	int num = 0, temp = 0;

	cout << "Enter the number of parameters \n";
	cin >> num;

	cout << "Enter the paramaters \n";
	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		input.push_back(temp);
	}

	result = singleNumber(input);
	cout << "The Two Numbers are " << result[0] << " " << result[1] << endl;
	
	return 0;
}
