#include <iostream>
#include <vector>
using namespace std;


int nthUglyNumber(int n)
{
	vector<int> result(1, 1);
	int i = 0, j = 0, k = 0;

	while (result.size() < n)
	{
		result.push_back(min (result[i] * 2, min(result[j] * 3, result[k] * 5)));

		if (result.back() == result[i] * 2) i++;
		if (result.back() == result[j] * 3) j++;
		if (result.back() == result[k] * 5) k++;	
	}

	return result.back();
}



int main()
{
	int inp = 0, res = 0;

	cout << "Enter the the Nth Ugly Number \n";
	cin >> inp;

	res = nthUglyNumber(inp);

	cout << "The Nth Ugly Number is " << res << endl;

	return 0;
}
