#include <iostream>
#include <set>
using namespace std;


int countPrimeSetBits(int L, int R)
{
	
	set<int> st= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	
	int major_count = 0;

	for (int i = L; i <= R; i++)
	{
		int num = i, count = 0;

		while(num)
		{
		   if (num & 0x01)
   		    {
			count++;
		    }
   		   num >>= 1;		   
		}


		if (st.find(count) != st.end())
			major_count++;

	}

	return major_count;
}



int main()
{
	int left = 0, right = 0;
	cout << "Enter the Left and the Right numbers \n";
	cin >> left >> right;
	

	int res = countPrimeSetBits(left, right);

	cout << "The number of prime numbers between left and right are " << res << endl;


	return 0;
}
