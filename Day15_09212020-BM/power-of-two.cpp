#include <iostream>
using namespace std;


bool isPowerofTwo(int n)
{
	int count = 0;

	while (n > 0)
	{
		if (n & 0x01) count++;
		n >>= 1;
	}
	return (count == 1? true: false);
}


int main()
{
	int num = 0; 
	cout << "Enter the Number \n";
	cin >> num;

	cout << "Is the number power of 2 " << std::boolalpha << isPowerofTwo(num) << endl;

	return 0;
}
