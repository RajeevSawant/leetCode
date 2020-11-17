#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> transpose(vector<vector<int>>& A)
{
	int row = A.size();

	vector<vector <int>> result(A[0].size(), vector<int> ());

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < A[i].size(); j++)
		{
			
			result[j].push_back(A[i][j]);
		}
	}

	return result;
}
