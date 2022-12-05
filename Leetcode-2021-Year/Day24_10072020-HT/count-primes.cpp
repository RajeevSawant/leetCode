#include <iostream>
using namespace std;


int countPrimes (int n)
{
	bool arr[n + 1];
	memset(arr, true, sizeof(arr));

	for (int i = 2; i <= n; i++)
	{
		if (arr[i] == true)
		{
			for (int j = 2 * i; j <= n; j += i)
			{
				arr[j] = false;
			}
		}

	}


	int counter = 0;

	for (int i = 2; i < n; i++)
	{
		if (arr[i]) counter++;
	}


	return counter;
}




int main()
{
	int input;

	cout << "Enter the values of the input \n";
	cin >> input;


	int res = countPrimes(input);

	cout << "The no. of primes are " << res << endl;
	return 0;
}
