#include <iostream>
#include <vector>
#include <stack>
using namespace std;



vector<int> dailyTemperature(vector<int>& T)
{
	int size = T.size();
	vector<int> temps(size, 0);
	vector<int> stack;


	for (int i = 0; i < size; ++i)
	{
		while(!stack.empty() && T[stack.back()] < T[i])
		{
			temps[stack.back()] =  i - stack.back();
			stack.pop_back();
		}

		stack.push_back(i);
	}
	
	return temps;
}



