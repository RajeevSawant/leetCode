#include <iostream>
using namespace std;


    bool isPowerOfFour(int num) {
        
        // check if the num is greater than 0.
        // check if nums has only one bit set
        // check if num - 1 % 3 is equal to 0
        
        return (num > 0 && (num & (num - 1)) == 0 && (num - 1) % 3 == 0);
    }

int main()
{	
	int inp = 0;

	cout << "Enter the input \n";
	cin >> inp;

	cout << "Is the number Power of Four ? \n" << std::boolalpha << isPowerOfFour(inp) << endl;
	
	return 0;
}
