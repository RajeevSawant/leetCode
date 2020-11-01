#include <iostream>
#include <vector>
using namespace std;


bool isOneBitCharacter(vector<int>& bits)
{
	int flag = 0;

	for (int i = 0; i < bits.size();)
	{
		if (bits[i] == 1)
		{
			i+=2;
			flag = 0;
		}
		else
		{
			i++;
			flag = 1;
		}
	}

	if (flag)
	    return true;

	return false;
}




int main()
{
	vector<int> bits {1, 1, 1, 0};

	cout << "The result is one-bit character " << boolalpha << isOneBitCharacter(bits) << endl;
	
	return 0;
}
