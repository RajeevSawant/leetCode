#include <iostream>
#include <vector>
using namespace std;



int minPathSum(vector<vector<int>>& grid)
{
	int m = grid.size();
	int n = grid[0].size();

	vector<vector<int> > sum(m , vector<int>(n , grid[0][0]));

	for (int i = 1; i < m; i++)
	{
		// Calculate  the sum for row , the value get added only from the left side of the grid
		sum[i][0] = sum[i - 1][0] + grid[i][0];
	}

	for (int j = 1; j < n; j++)
	{
		// Calculate the sum for the col, the value get added only from the top of the col 
		sum[0][j] = sum[0][j - 1] + grid[0][j];
	}

	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			// take min of value from top or from side 
			sum[i][j] = min(sum[i - 1][j], sum[i][j - 1]) + grid[i][j];
		}

	}

	return sum[m - 1][n - 1];
}


int main()
{
	
	vector<vector <int> > grid {{1, 3, 1},
				    {1, 5, 1},
				    {4, 2, 1}};

	int result = minPathSum(grid);

	cout << "The minimizes the sum of all numbers along its path  " << result << endl;
	
	return 0;
}
