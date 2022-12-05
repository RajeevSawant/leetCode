#include <iostream>
#include <vector>
using namespace std;


int uniquePaths(int m, int n)
{
	vector<vector<int>> dp(m , vector<int>(n, 1));

	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			/*
			Since the robot can only move right and down, when it arrives at a point, it either arrives from left or above. 
			If we use dp[i][j] for the number of unique paths to arrive at the point (i, j), then the state equation is dp[i][j] = dp[i][j - 1] + dp[i - 1][j]. Moreover, we have the base cases dp[0][j] = dp[i][0] = 1 for all valid i and j. */
			
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}

	return dp[m - 1][n - 1];
}


int main()
{
	int row, col, res;

	cout << "Enter the grid dimension\n";
	cin >> row >> col;

	res = uniquePaths(row, col);
	
	cout << "No.of possible unique paths are " << res << endl; 
	
	return 0;
}
