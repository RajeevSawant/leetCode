#include <iostream>
using namespace std;


void wallsAndGates(vector<vector<int>>& rooms){

	if (rooms.size() == 0)
		return;


	for (int i = 0; i < rooms.size(); i++){
		for(int j = 0; j < rooms[0].size(); j++){
			
			if (rooms[i][j] == 0)
				helper(rooms, i , j, 0);
		}
	}

}



void helper(vector<vector<int>>& rooms, int i, int j, int distance){

	if (i < 0 || i == rooms.size() || j < 0 || j == rooms[0].size() || rooms[i][j] < distance)
		return;

	rooms[i][j] = distance;

	helper(rooms, i + 1, j, distance + 1);
	helper(rooms, i, j + 1, distance + 1);
	helper(rooms, i - 1, j, distance + 1);
	helper(rooms, i, j - 1, distance + 1);

}
