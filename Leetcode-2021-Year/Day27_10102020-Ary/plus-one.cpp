#include <iostream>
#include <vector>
using namespace std;



vector<int> plusOne(vector<int>& digits) {
        
        int sum = 0, carry = 1;
        
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            // calculate the sum by adding the carry
            sum = carry + digits[i];
            
            // get the carry 
            carry = sum / 10;
            
            // save the remainder of the sum in digits 
            digits[i] = sum % 10;
        }
        
        
        if (carry)
        {
            // insert the carry in the beginning
            digits.insert(digits.begin(), carry);
        }
        
        return digits;
        
}

int main()
{
	
	vector<int> inp {1, 2, 3};
	vector<int> res;

	res = plusOne(inp);

	cout << "The result is \n";
	cout << "[ ";
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << "]" << endl;

	return 0;
}
