#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height)
{
	int lo = 0, hi = height.size() - 1, maxValue = INT_MIN;

	while (lo < hi)
	{
		maxValue = max(maxValue, max(maxValue, (hi - lo)*min(height[hi], height[lo])));

		 if (height[lo] < height[hi])
		 {
			lo++;
		 }
		 else
		 {
			hi--;
		 }
	}
	
	return maxValue;
}


int main()
{
	vector<int> result;
	int n = 0, temp = 0, results = 0;

	cout << "Enter the number of parameters\n";
	cin >> n;

	cout << "Enter the values\n";
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		result.push_back(temp);
	}
	
	results = maxArea(result);

	cout << "The max Area of water in container is  " << results << endl;

	return 0;
}

