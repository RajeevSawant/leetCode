#include <iostream>
#include <vector>
using namespace std;


bool isToeplitzMatrix(vector<vector<int>>& matrix)
{
	vector<int> sample = matrix[0];

	int row = matrix.size();
	int col = matrix[0].size();

	int i = 1;


	while (i < row)
	{
		
		for (int j = 0; j < col - 1; j++)
		{
			if (matrix[i][j + 1] != sample[j])
				return false;
		}

		sample = matrix[i];
		i++;
	}

	return true;
}


