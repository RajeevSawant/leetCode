#include <iostream>
using namespace std;


bool isPowerofTwo(int n)
{
        // The counter
        int count = 0;
        
        // while n exist and is greater than 0 , to avoid negative nums eg: -16.
        while(n > 0)
        {
            if (n & 0x01) count++;
            
            // shift right to make the lSB bit to 0, this adds the MSB bit which are also 0. 
            n >>= 1;
        }
        
        return ((count == 1) ? true:false);

}

int main()
{
	int num = 0; 
	cout << "Enter the Number \n";
	cin >> num;

	cout << "Is the number power of 2 " << std::boolalpha << isPowerofTwo(num) << endl;

	return 0;
}
