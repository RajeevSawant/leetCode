#include <iostream>
#include <vector>
using namespace std;



    void eraseisland(vector<vector<char>>& grid , int i , int j)
    {
        int n = grid.size(), m = grid[0].size();
        
        // if the positions of i and j are at the extreme end or the value at the grid pos i and j is already 0 , just return.
        if (i < 0 || i == n || j < 0 || j == m || grid[i][j] == '0' ) return;
        
        // make the position zero
        grid[i][j] = '0';
        
        // erase top position
        eraseisland(grid , i - 1, j);
        
        // erase left position
        eraseisland(grid , i, j - 1);
        
        // erase right position
        eraseisland(grid , i, j + 1);
        
        // erase bottom position
        eraseisland(grid , i + 1, j );
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        // get the grid dimensions and initialized the island.
        int n = grid.size(), m = n ? grid[0].size() : 0, island = 0;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // if the value in the grid is 1 then keep only that location and erase all the ones arnd calling the erase func.
                if (grid[i][j] == '1')
                {
                    // island found , incre the value.
                    island++;
                    
                    // clear the neighbour islands and make them make water
                    eraseisland(grid , i , j);
                }
            }
        }
        
        // return island count
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




