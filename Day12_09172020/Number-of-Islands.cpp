#include <iostream>
#include <vector>
using namespace std;



void eraseIsland (vector<vector<char> >& grid, int i , int j)
{
	int n = grid.size(), m = grid[0].size();

	if (i < 0 || i == n || j < 0 || j == m || grid[i][j] == '0')
		return;

	grid[i][j] = '0';

	eraseIsland(grid, i - 1, j);
	eraseIsland(grid, i + 1, j);
	eraseIsland(grid, i, j - 1);
	eraseIsland(grid, i, j + 1);
}


int numIslands(vector<vector<char> >& grid)
{
	int n = grid.size(), m = n ? grid[0].size() : 0, island = 0;

	for (int i = 0; i < n; i++)
	{
	   for (int j = 0; j < m; j++)
	   {
		   if (grid[i][j] == '1')
		   {
			island++;
			eraseIsland(grid, i, j);	
		   }
	   }

	}
	
	return island;
}


int main()
{
	std::vector<std::vector<char> > input{  {'1', '1', '1', '1', '0'}, 
			          		{'1', '1', '0', '1', '0'}, 
				      		{'1', '1', '0', '0', '0'}, 
				      		{'0', '0', '0', '0', '0'} };


	int num = numIslands(input);

	cout << "The Number of Islands are " << num << endl;

	return 0;
}




