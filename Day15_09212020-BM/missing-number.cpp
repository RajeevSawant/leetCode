#include <iostream>
#include <vector>
using namespace std;


int missingNumber(vector<int>& nums)
{
	int result = nums.size();

	for (int i = 0; i < nums.size(); i++)
	{
	   /* Xor has following properties
                1. XOR ing the number by itself will result into 0.
                2. XOR the number with 0 will result into same number 
                3. XOR follows commutative and associative properties , which means if we can re-order our XOR operations in
                anyway we want will result in same value.
                
                So, as we know it doesnt matter how we XOR the number as long as we XOR 2 of the same number it will result in 0.
                Eventually we will XOR 0 with the missing number which will result in same number.
            */
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
