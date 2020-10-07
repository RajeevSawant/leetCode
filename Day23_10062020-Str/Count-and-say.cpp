#include <iostream>
using namespace std;


string countAndSay(int n)
{
	// If the n value is 0 then return empty string
	if (n == 0) return "";

	// Initialize result with 1 which means n is not empty
	string res = "1";

	// Decrease the value of n 
	while(--n)
	{
		// initialize the empty cur string
		string cur = "";


		for (int i = 0; i < res.size(); i++)
		{
			// since the res contains 1 , so count is initialized with 1.	
			int count = 1;
			
			// if res has more elements and res[i] is equal to res[i + 1] 
			while((i + 1 < res.size()) && (res[i] == res[i + 1]))
			{
				// we increase the number of count
				count++;

				// And we increase i as we dont want to have 2nd repeated number been counted again
				i++;
			}
			// Copy the count first and then the value which was counted
			cur += to_string(count) + res[i];
		}

		//store the cur in res
		res = cur;

	}	
	
	return res;
}

int main()
{
	int count = 0;

	cout << "Enter the count u wanna say \n";
	cin >> count;

	string res = countAndSay(count);

	cout << "The count is said as  " << res << endl;

	return 0;
}
