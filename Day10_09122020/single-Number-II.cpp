#include <iostream>
#include <vector>
using namespace std;


int singlenumber (vector<int>& nums)
{
	int ones = 0, twos = 0;
	
	for (int i = 0; i < nums.size(); i++)
	{
		ones ^= nums[i] & ~twos;
		twos ^= nums[i] & ~ones;
	}

	return ones;
}



int main()
{
	vector<int> inp;
	int n_size = 0, temp;

	cout << "Enter the length of the array \n";
	cin >> n_size;

	cout << "\nEnter the numbers \n";
	while (n_size--)
	{
	  cin >> temp;
  	  inp.push_back(temp);	  
	}


	int result = singlenumber(inp);

	cout << "The Number that appears only once is " << result << "\n";

	return 0;
}
