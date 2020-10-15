#include <iostream>
using namespace std;


int hammingDistance(int x, int y)
{
	int z = x ^ y;
	int count = 0;

	while(z)
	{
		if (z & 0x01) count++;
		z >>= 1;
	}

	return count;
}


int main()
{
	int inp1, inp2;

	cout << "Enter the numbers  \n";
	cin >> inp1 >> inp2;

	int res = hammingDistance(inp1, inp2);

	cout << "The Hamming Distance is " << res << endl;

	return 0;

}
