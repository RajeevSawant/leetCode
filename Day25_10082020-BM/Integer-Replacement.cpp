#include <iostream>
using namespace std;


    int res = 0;
    
    int integerReplacement(int n) {
        
        // if n is 1 then no further division
        if (n == 1)
            return res;
        
        // if n is 3 then it moves to 3 --> 2  --> 1
        if (n == 3)
            return res+=2;
        
        // if n is INT_MAX then it gets half and we return 32. 
        if (n == INT_MAX)
            return 32;
        
        // which means n is greater than 1 and not 3 or Max Int 
        res++;
        
        // if the last bit is 1 , then the number is odd
        if (n & 1)
        {
            // for the number like 7 , 11,  15 etc etc
            if (((n + 1) % 4) == 0)
            {
                return integerReplacement(n + 1);
            }
            else
            {
                // for the numbers like 5, 9, 13 etc etc
                return integerReplacement(n - 1);
            }
        }
        else
        {
            // for all the even numbers
            return integerReplacement(n / 2);
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

