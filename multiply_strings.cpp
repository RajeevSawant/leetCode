#include <iostream>
#include <vector>
using namespace std;


string multiply (string num1, string num2)
{
	int m = num1.size();
	int n = num2.size();
	string result;

	if ((m == 1 && num1[0] == '0') || (n == 1 && num2[0] == '0'))
		return to_string(0);

	vector<int> res(m + n, 0);

	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');

		}
	}




	for (int k = m + n - 1; k >= 1; k--)
	{
		if (res[k] >= 10)
		{
			res[k - 1] += (res[k] / 10);
			res[k] = res[k] % 10;
		}
	}

	while (res.front() == 0)
	{
		res.erase (res.begin());
	}

	for (int i = 0; i < res.size(); i++)
	{
		result += to_string(res[i]);
	}

	return result;
}




int main() 
{
	string num1 = "123", num2 = "456";

	cout << "The multiplication of the string is  " << multiply(num1, num2) << endl;

	return 0;
}
