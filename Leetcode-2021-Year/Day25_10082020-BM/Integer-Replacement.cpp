#include <iostream>
using namespace std;


int res = 0;
    
int integerReplacement(int n) {
        
        
        // If the value is 3 then the res increases by 2.
        if (n == 3)
            return res += 2;
        
        // If the value is 1 then the return res.
        if (n == 1)
            return res;
        
        // If the value of n is greater than INT_MAX return 32.
        if (n == INT_MAX)
            return 32;
        
        // increment after every half division
        res++;
        
        
        // check if the number is odd
        if (n & 1)
        {
            
            if (((n + 1) % 4) == 0)
            {
                // for the numbers like 7 or 15 etc
                return integerReplacement(n + 1);       
            }
            else
            {
                // for the numbers like 5 or others 
                return integerReplacement(n - 1);
            }
        }
        else
        {
            
            // for the even numbers
            return integerReplacement(n/2);
        }
        
}


int main()
{

	int inp = 0, res = 0;

	cout << "Enter the Input number \n";
	cin >> inp;


	res = integerReplacement(inp);

	cout << "The Minimum number of Replacements needed " << res << endl;

	return 0;
}

