#include <iostream>
#include <vector>
using namespace std;



int count(int num)
{
	int count = 0;

	while(num)
	{
	       if(num & 0x1) count++;
	       num >>= 1;	
	}
	
	return count;	
}

vector<int> countBits(int num)
{
	vector<int> bits;

	for(int i = 0; i <= num; i++)
	{
		bits.push_back(count(i));
	}	
	
	return bits;
}




int main()
{
	int num = 0;
	vector<int> result;

	cout << "Enter the number \n";
	cin >> num;


	result = countBits(num);

	cout << "The Number of 1's would be \n";
	cout << "[";

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	
	cout << "]\n\n";
	return 0;
}
