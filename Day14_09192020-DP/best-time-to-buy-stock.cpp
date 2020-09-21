#include <iostream>
#include <vector>
using namespace std;


int maxprofit(vector<int>& prices)
{
	int maxpro = 0, minprice = INT_MAX;

	for (int i = 0; i < prices.size(); i++)
	{
		minprice = min (minprice, prices[i]);
		maxpro = max(maxpro, prices[i] - minprice);
	}

	return maxpro;
}


int main()
{
	vector<int> inp {7, 1, 5, 3, 6, 4};
	int profit = 0;


	profit = maxprofit(inp);

	cout << "The profit was  " << profit << endl;

	return 0;
}

