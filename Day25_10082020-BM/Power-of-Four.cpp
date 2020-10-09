#include <iostream>
using namespace std;


bool isPowerOfFour(int num)
{

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
