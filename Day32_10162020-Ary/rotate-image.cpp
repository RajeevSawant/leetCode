#include <iostream>
#include <vector>
using namespace std;



void rotate(vector<vector <int>>& matrix)
{
	
	int n = matrix.size();


	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}

	
	for (int i = 0; i < n; i++)
	{
		reverse(matrix[i].begin(), matrix[i].end());
	}

}


int main()
{
	vector<vector<int> > matrix {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	rotate(matrix);


	cout << "{\n";
	for (int i = 0; i < matrix.size(); i++)
	{
		cout << "{";
		for (int j = 0; j < matrix[i].size(); j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "}\n";
	}
	cout << "}\n";

	return 0;
}
